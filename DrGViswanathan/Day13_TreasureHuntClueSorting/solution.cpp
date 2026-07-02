/*
Problem Name: Treasure Hunt Clue Sorting
Description: Sort string based on (char position % 5). Ties broken by alphabetical order.
*/

#include <bits/stdc++.h>
using namespace std;

bool compareClues(char c1, char c2) {
    int diff1 = (c1 - 'a' + 1) % 5;
    int diff2 = (c2 - 'a' + 1) % 5;
    if (diff1 != diff2) return diff1 < diff2;
    return c1 < c2;
}

int main() {
    string s = "treasure";
    sort(s.begin(), s.end(), compareClues);
    cout << "Day 13 Test: " << s << endl;
    return 0;
}
