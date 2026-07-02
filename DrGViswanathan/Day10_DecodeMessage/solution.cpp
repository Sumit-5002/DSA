/*
Problem Name: Decode Message
Description: Decode the string where 'a'-'i' are 1-9 and 'j'-'z' are 10#-26#.
*/

#include <bits/stdc++.h>
using namespace std;

void decode_message(string S) {
    string decoded_msg = "";
    int n = S.length() - 1;
    while(n >= 0) {
        if(S[n] == '#') {
            int num = stoi(S.substr(n-2, 2));
            decoded_msg += (char)('a' + num - 1);
            n -= 3;
        } else {
            int num = S[n] - '0';
            decoded_msg += (char)('a' + num - 1);
            n -= 1;
        }
    }
    reverse(decoded_msg.begin(), decoded_msg.end());
    cout << "Decoded: " << decoded_msg << endl;
}

int main() {
    string S = "26#11#13#13#114#97820#";
    decode_message(S);
    return 0;
}
