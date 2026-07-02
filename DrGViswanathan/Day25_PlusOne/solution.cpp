/*
Problem Name: 66. Plus One
Description: Increment a large integer represented as an array of digits by one.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) { digits[i]++; return digits; }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits = {1, 2, 3};
    plusOne(digits);
    cout << "Day 25 Test Result: ";
    for(int x : digits) cout << x << " ";
    cout << endl;
    return 0;
}
