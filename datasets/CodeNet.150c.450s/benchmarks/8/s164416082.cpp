#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, tp = 0, hp = 0;
    cin >> n;
    REP(i, n) {
        string t, h;
        cin >> t >> h;
        int r = strcmp(t.c_str(), h.c_str());
        if (r == 0) {tp++; hp++;}
        else if (r > 0) tp += 3;
        else hp += 3;}
    cout << tp << " " << hp << endl;
}