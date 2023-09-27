#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    string s, p;
    getline(cin, s);
    getline(cin, p);
    s += s;
    bool flg = false;
    REP(i, (s.size()+1)/2) if (memcmp(s.c_str()+i, p.c_str(), p.size()) == 0) flg = true;
    flg ? cout << "Yes" << endl : cout << "No" << endl;
}