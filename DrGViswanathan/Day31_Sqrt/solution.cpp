/*
Problem Name: 69. Sqrt(x)
Description: Return the square root of x rounded down to the nearest integer.
*/

#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    if (x == 0) return 0;
    for (long long i = 1; i <= x; i++) {
        if (i * i == x) return i;
        if (i * i > x) return i - 1;
    }
    return 0;
}

int main() {
    cout << "Day 31 Test (sqrt of 8): " << mySqrt(8) << endl;
    return 0;
}
