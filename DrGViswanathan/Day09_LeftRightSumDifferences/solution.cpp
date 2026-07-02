/*
Problem Name: 2574. Left and Right Sum Differences
Description: Return an array where answer[i] = |leftSum[i] - rightSum[i]|.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n, 0), right(n, 0), res(n);
    for(int i = 1; i < n; i++) left[i] = left[i-1] + nums[i-1];
    for(int i = n-2; i >= 0; i--) right[i] = right[i+1] + nums[i+1];
    for(int i = 0; i < n; i++) res[i] = abs(left[i] - right[i]);
    return res;
}

int main() {
    vector<int> nums = {10, 4, 8, 3};
    vector<int> res = leftRightDifference(nums);
    cout << "Day 9 Test Result: ";
    for(int x : res) cout << x << " ";
    cout << endl;
    return 0;
}
