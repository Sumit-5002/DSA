/*
Problem Name: Total Waviness of Numbers I
Description: Given two integers num1 and num2 representing an inclusive range [num1, num2]. 
The waviness of a number is defined as the total count of its peaks and valleys.
*/

#include <bits/stdc++.h>
using namespace std;

// Logic: String conversion to check peaks and valleys.
int totalWaviness(int num1, int num2) {
    int result = 0;
    for (int i = num1; i <= num2; ++i) {
        string s = to_string(i);
        for (int j = 1; j < (int)s.length() - 1; ++j) {
            if ((s[j] > s[j - 1] && s[j] > s[j + 1]) || (s[j] < s[j - 1] && s[j] < s[j + 1]))
                result++;
        }
    }
    return result;
}

int main() {
    int num1 = 100, num2 = 150;
    cout << "Running Day 4: Total Waviness of Numbers I..." << endl;
    cout << "Total Waviness in [" << num1 << ", " << num2 << "]: " << totalWaviness(num1, num2) << endl;
    return 0;
}
