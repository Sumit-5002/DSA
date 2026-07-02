/*
Problem Name: 3838. Weighted Word Mapping
Description: Sum character weights modulo 26 and map to reverse alphabetical order (0->'z', 1->'y').
*/

#include <bits/stdc++.h>
using namespace std;

string mapWordWeights(vector<string>& words, vector<int>& weights) {
    string result = "";
    for (const string& word : words) {
        int current_sum = 0;
        for (char c : word) current_sum += weights[c - 'a'];
        int rem = current_sum % 26;
        result += ('z' - rem);
    }
    return result;
}

int main() {
    vector<string> words = {"abc"};
    vector<int> weights(26, 1);
    cout << "Day 12 Test: " << mapWordWeights(words, weights) << endl;
    return 0;
}
