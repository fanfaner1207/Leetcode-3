#include <iostream>
#include <string>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:

	int lengthOfLongestSubstring(string s) {
		map<char, int> charTable;
		//int isChange = 0, stay = 0;
		int total = 0, max = 0;

		for (int i = 0; i < s.length(); i++) {
			//char�bcharTable
			if (charTable.count(s[i]) != 0) {
				if (total > max)max = total;

				//�q���ƪ��¦a��+1���s�ˬd
				i = charTable[s[i]] + 1;//abbca�|��loop
				charTable.clear();
				total = 0;
			}
			//char�ثe����m
			charTable[s[i]] = i;
			total++;
		}
		if (total > max)max = total;
		return  max;
	}
};