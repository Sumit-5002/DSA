/*
Problem Name: 1. Two Sum
Description: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); i++) {
        if (seen.count(target - nums[i])) return {seen[target - nums[i]], i};
        seen[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    vector<int> res = twoSum(nums, 9);
    cout << "Day 8 Test: Indices [" << res[0] << ", " << res[1] << "]" << endl;
    return 0;
}
