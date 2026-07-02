/*
Problem Name: 9. Palindrome Number
Description: Given an integer x, return true if x is a palindrome, and false otherwise.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;
    long reversedNumber = 0, original = x;
    while (x > 0) {
        reversedNumber = reversedNumber * 10 + (x % 10);
        x /= 10;
    }
    return original == reversedNumber;
}

int main() {
    int test = 121;
    cout << "Day 6 Test (121): " << (isPalindrome(test) ? "True" : "False") << endl;
    return 0;
}
