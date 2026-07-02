/*
Problem Name: 14. Longest Common Prefix
Description: Find the longest common prefix string amongst an array of strings.
*/

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    vector<string> strs = {"flower","flow","flight"};
    cout << "Day 29 Test: " << longestCommonPrefix(strs) << endl;
    return 0;
}
