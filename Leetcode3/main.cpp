#include "solution.cpp"

int main() {
	Solution sol;
	vector<string> s = { "dvdf","abbca","abb","aab",""," ","ab","aaa" ,"pwwkew" };
	for (string i : s)	cout << sol.lengthOfLongestSubstring(i) << "\t\"" << i << "\"" << endl;
}