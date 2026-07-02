/*
Problem Name: 58. Length of Last Word
Description: Return the length of the last word in the string.
*/

#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int i = s.length() - 1, len = 0;
    while (i >= 0 && s[i] == ' ') i--;
    while (i >= 0 && s[i] != ' ') { len++; i--; }
    return len;
}

int main() {
    cout << "Day 30 Test: " << lengthOfLastWord("Hello World") << endl;
    return 0;
}
