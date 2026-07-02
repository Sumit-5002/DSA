/*
Problem Name: 2144. Minimum Cost of Buying Candies With Discount
Description: For every two candies bought, get the third (cheapest) for free. Minimize total cost.
*/

#include <bits/stdc++.h>
using namespace std;

int minimumCost(vector<int>& cost) {
    sort(cost.rbegin(), cost.rend());
    int totalcost = 0;
    for (int i = 0; i < cost.size(); i += 3) {
        totalcost += cost[i];
        if (i + 1 < cost.size()) totalcost += cost[i+1];
    }
    return totalcost;
}

int main() {
    vector<int> cost = {1, 2, 3};
    cout << "Day 14 Test: " << minimumCost(cost) << endl;
    return 0;
}
