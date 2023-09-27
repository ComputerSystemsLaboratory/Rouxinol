#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)

int main() {
    string S;
    getline(cin, S);

    string str;
    rep(i, S.size()) {
        if (islower(S[i]))str+=toupper(S[i]);
        else if (isupper(S[i]))str+=tolower(S[i]);
        else str += S[i];
    }
    cout << str << endl;
}
