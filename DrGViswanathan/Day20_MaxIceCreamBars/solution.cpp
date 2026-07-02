/*
Problem Name: 1833. Maximum Ice Cream Bars
Description: Maximize number of ice cream bars bought with coins.
*/

#include <bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());
    int count = 0;
    for (int c : costs) {
        if (coins >= c) { coins -= c; count++; }
        else break;
    }
    return count;
}

int main() {
    vector<int> costs = {1, 3, 2, 4, 1};
    cout << "Day 20 Test: " << maxIceCream(costs, 7) << endl;
    return 0;
}
