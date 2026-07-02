/*
Problem Name: 20. Valid Parentheses
Description: Determine if the input string containing brackets is valid.
*/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(') st.push(')');
        else if (c == '{') st.push('}');
        else if (c == '[') st.push(']');
        else if (st.empty() || st.top() != c) return false;
        else st.pop();
    }
    return st.empty();
}

int main() {
    cout << "Day 24 Test ('()[]{}'): " << (isValid("()[]{}") ? "True" : "False") << endl;
    return 0;
}
