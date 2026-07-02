/*
Problem Name: 1189. Maximum Number of Balloons
Description: Return the maximum number of instances of "balloon" that can be formed using the given string.
*/

#include <bits/stdc++.h>
using namespace std;

int maxNumberOfBalloons(string text) {
    unordered_map<char, int> C;
    for (char c : text) C[c]++;
    return min({C['b'], C['a'], C['l']/2, C['o']/2, C['n']});
}

int main() {
    cout << "Day 21 Test ('nlaebolko'): " << maxNumberOfBalloons("nlaebolko") << endl;
    return 0;
}
