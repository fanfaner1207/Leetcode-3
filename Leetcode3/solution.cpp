#include <iostream>
#include <string>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:

	int lengthOfLongestSubstring(string s) {
		map<char, int> charTable;
		int isChange = 0;
		int max = 0, stay = 0;

		for (int i = 0; i < s.length(); i++) {
			//char�bcharTable
			if (charTable.count(s[i]) != 0) {
				//����char��s��m�P���sub string���j�p
				if (max < i - stay) {
					max = i - stay;
					isChange++;
				}
				if (charTable[s[i]] < stay) {//�B�zabbca
					charTable[s[i]] = stay - 1;
				}
				stay = i;
				if (max < i - charTable[s[i]]) {
					max = i - charTable[s[i]];
					isChange++;
				}
			}
			//char�ثe����m
			charTable[s[i]] = i;
		}

		if (stay != s.length()) {
			if (max < s.length() - stay) {
				max = s.length() - stay;
			}
		}
		return  max;
	}
};