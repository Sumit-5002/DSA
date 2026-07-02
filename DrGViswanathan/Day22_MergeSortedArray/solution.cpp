/*
Problem Name: 88. Merge Sorted Array
Description: Merge two sorted arrays nums1 and nums2 into a single sorted array.
*/

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> result;
    for (int i = 0; i < m; i++) result.push_back(nums1[i]);
    for (int j = 0; j < n; j++) result.push_back(nums2[j]);
    sort(result.begin(), result.end());
    nums1 = result;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    merge(nums1, 3, nums2, 3);
    cout << "Day 22 Test: ";
    for(int x : nums1) cout << x << " ";
    cout << endl;
    return 0;
}
