#include <iostream>
#include <string>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int isChange = 0;
		int max = 0, stay = 0;
		map<char, int> charTable;
		for (int i = 0; i < s.length(); i++) {
			if (charTable.count(s[i]) != 0) {//char 存在
				stay = i;
				if (max < i - charTable[s[i]]) {
					max = i - charTable[s[i]];
					isChange++;
				}
			}
			charTable[s[i]] = i;//char出現的位置
		}
		if (stay != s.length()) {
			if (max < s.length() - stay + 1) {
				max = max = s.length() - stay + 1;
			}
		}
		return isChange > 0 ? max : s.length();
	}
};

int main() {
	Solution sol;
	vector<string> s = { ""," ","ab","aab","abb","aaa" ,"pwwkew","abbca" };
	for (string i : s)	cout << sol.lengthOfLongestSubstring(i) << "\t\"" << i << "\"" << endl;
}