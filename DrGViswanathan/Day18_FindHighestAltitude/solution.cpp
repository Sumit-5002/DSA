/*
Problem Name: 1732. Find the Highest Altitude
Description: Given gain array, return the highest altitude reached.
*/

#include <bits/stdc++.h>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int curr = 0, maxAlt = 0;
    for (int g : gain) {
        curr += g;
        maxAlt = max(maxAlt, curr);
    }
    return maxAlt;
}

int main() {
    vector<int> gain = {-5, 1, 5, 0, -7};
    cout << "Day 18 Test: " << largestAltitude(gain) << endl;
    return 0;
}
