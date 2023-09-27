#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, tp = 0, hp = 0;
    cin >> n;
    REP(i, n) {
        string t, h;
        cin >> t >> h;
        if (t == h) {tp++; hp++;}
        else if (t > h) tp += 3;
        else hp += 3;}
    cout << tp << " " << hp << endl;
}