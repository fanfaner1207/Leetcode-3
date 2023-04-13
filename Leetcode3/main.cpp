#include "solution.cpp"

int main() {
	Solution sol;
	vector<string> s = { "abbca","dvdf","pwwkew","abb","aab",""," ","ab","aaa" };
	for (string i : s)	cout << sol.lengthOfLongestSubstring(i) << "\t\"" << i << "\"" << endl;
}