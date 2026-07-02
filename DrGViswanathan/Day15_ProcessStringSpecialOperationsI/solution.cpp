/*
Problem Name: 3612. Process String with Special Operations I
Description: Process string operations: * (remove last), # (duplicate), % (reverse).
*/

#include <bits/stdc++.h>
using namespace std;

string processStr(string s) {
    string result = "";
    for (char ch : s) {
        switch(ch) {
            case '*': if (!result.empty()) result.pop_back(); break;
            case '#': result += result; break;
            case '%': reverse(result.begin(), result.end()); break;
            default: result.push_back(ch); break;
        }
    }
    return result;
}

int main() {
    cout << "Day 15 Test: " << processStr("a#b%*") << endl;
    return 0;
}

