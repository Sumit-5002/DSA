/*
Problem Name: String Processing with Dashes
Description: Bob is given a string that consists of lowercase English letters and dashes ('_'). 
Whenever Bob encounters a dash, he must remove the closest English letter to the left. 
If the result is empty or we try to remove from an empty string, print -1.
*/

#include <bits/stdc++.h>
using namespace std;

// Logic: Using string as a stack to simulate removal.
void process_dashes(int n, std::string s) {
    std::string result = "";
    for(int i = 0; i < n; i++) {
        if(s[i] == '_') {
            if(!result.empty()) result.pop_back();
            else { std::cout << "-1" << std::endl; return; }
        } else { result.push_back(s[i]); }
    }
    if(result.empty()) std::cout << "-1" << std::endl;
    else std::cout << result << std::endl;
}

int main() {
    cout << "Running Day 2: String Processing with Dashes Test Cases..." << endl;
    
    cout << "Test 1 (ab_c_d): ";
    process_dashes(6, "ab_c_d");
    
    cout << "Test 2 (a__b): ";
    process_dashes(4, "a__b");
    
    return 0;
}
