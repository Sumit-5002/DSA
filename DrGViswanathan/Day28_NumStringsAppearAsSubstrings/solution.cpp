/*
Problem Name: 1967. Number of Strings That Appear as Substrings in Word
Description: Return the number of strings in patterns that exist as a substring in word.
*/

#include <bits/stdc++.h>
using namespace std;

int numOfStrings(vector<string>& patterns, string word) {
    int count = 0;
    for (const string& p : patterns) if (word.find(p) != string::npos) count++;
    return count;
}

int main() {
    vector<string> patterns = {"a","abc","bc","d"};
    cout << "Day 28 Test: " << numOfStrings(patterns, "abc") << endl;
    return 0;
}
