/*
Problem Name: 1344. Angle Between Hands of a Clock
Description: Return the smaller angle between hour and minute hands.
*/

#include <bits/stdc++.h>
using namespace std;

double angleClock(int hour, int minutes) {
    double angle = abs(30.0 * hour - 5.5 * minutes);
    return min(angle, 360.0 - angle);
}

int main() {
    cout << "Day 17 Test: " << angleClock(12, 30) << endl;
    return 0;
}
