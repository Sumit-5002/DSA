/*
Problem Name: 5. Longest Palindromic Substring
Description: Given a string s, return the longest palindromic substring in s.
*/

#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    int start = 0, maxLength = 0, n = s.length();
    auto expand = [&](int l, int r) {
        while(l >= 0 && r < n && s[l] == s[r]) { l--; r++; }
        if (r - l - 1 > maxLength) { maxLength = r - l - 1; start = l + 1; }
    };
    for (int i = 0; i < n; i++) { expand(i, i); expand(i, i + 1); }
    return s.substr(start, maxLength);
}

int main() {
    string s = "babad";
    cout << "Day 7 Test ('babad'): " << longestPalindrome(s) << endl;
    return 0;
}
