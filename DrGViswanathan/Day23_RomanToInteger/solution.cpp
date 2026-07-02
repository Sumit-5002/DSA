/*
Problem Name: 13. Roman to Integer
Description: Convert a Roman numeral string to an integer.
*/

#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int total = 0, n = s.length();
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && roman[s[i]] < roman[s[i + 1]]) total -= roman[s[i]];
        else total += roman[s[i]];
    }
    return total;
}

int main() {
    cout << "Day 23 Test ('MCMXCIV'): " << romanToInt("MCMXCIV") << endl;
    return 0;
}
