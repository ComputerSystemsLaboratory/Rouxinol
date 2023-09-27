#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    string W, T;
    cin >> W;
    REP(i, W.size()) W[i] = tolower(W[i]);
    int s = 0;
    while (cin >> T, T != "END_OF_TEXT") {
        REP(i, T.size()) T[i] = tolower(T[i]);
        if (T.find(W) != -1 && W.size() == T.size()) s++;}
    cout << s << endl;
}