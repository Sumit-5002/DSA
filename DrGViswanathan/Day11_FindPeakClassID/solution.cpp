/*
Problem Name: Find Peak Class ID
Description: Print the class_id of the first class with number of students greater than or equal to 
adjacent previous and next classes.
*/

#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& A) {
    int n = A.size();
    for(int i = 0; i < n; i++) {
        if((i == 0 || A[i] >= A[i-1]) && (i == n-1 || A[i] >= A[i+1])) return i;
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 1};
    cout << "Day 11 Test: Peak index is " << peakIndexInMountainArray(arr) << endl;
    return 0;
}
