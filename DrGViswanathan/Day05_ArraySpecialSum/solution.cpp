/*
Problem Name: Array Special Sum
Description: You are given an array of length N. This array is sorted and contains several duplicates that must be removed. 
The special sum is defined as 2^val1 + 2^val2 + ... where val1, val2... are unique values in the array.
*/

#include <bits/stdc++.h>
using namespace std;

// Logic: In-place duplicate filtering and bit shifting.
long long arraySpecialSum(int n, vector<int>& nums) {
    long long special_sum = 0;
    for(int i = 0; i < n; i++) {
        if(i == 0 || nums[i] != nums[i-1]) {
            special_sum += (1LL << nums[i]);
        }
    }
    return special_sum;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};
    cout << "Running Day 5: Array Special Sum..." << endl;
    cout << "Array Special Sum: " << arraySpecialSum(nums.size(), nums) << endl;
    return 0;
}
