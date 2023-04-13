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
			//char在charTable
			if (charTable.count(s[i]) != 0) {
				//重複char更新位置與比較sub string的大小
				if (max < i - stay) {
					max = i - stay;
					isChange++;
				}
				if (charTable[s[i]] < stay) {//處理abbca
					charTable[s[i]] = stay - 1;
				}
				stay = i;
				if (max < i - charTable[s[i]]) {
					max = i - charTable[s[i]];
					isChange++;
				}
			}
			//char目前的位置
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