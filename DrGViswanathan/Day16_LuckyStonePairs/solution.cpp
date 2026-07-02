/*
Problem Name: Lucky Stone Pairs
Description: Count pairs of stones divisible by N or M.
*/

#include <bits/stdc++.h>
using namespace std;

long long find_lucky_stone_pairs(int p, int n, int m, vector<int>& stones) {
    long long count = 0;
    for (int s : stones) if (s % n == 0 || s % m == 0) count++;
    return (count * (count - 1)) / 2;
}

int main() {
    vector<int> stones = {2, 4, 3, 5};
    cout << "Day 16 Test: " << find_lucky_stone_pairs(4, 2, 3, stones) << endl;
    return 0;
}
