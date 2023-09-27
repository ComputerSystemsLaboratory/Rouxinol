#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using pii = pair<int, int>;
using vi = vector<int>;
using vii = vector<vi>;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s.at(i);
    int ac , wa, tle , re;
    ac = 0; wa = 0; tle = 0; re = 0;
    rep(i, n){
        if ("AC" == s.at(i)) ac++;
        else if ("WA" == s.at(i)) wa++;
        else if ("TLE" == s.at(i)) tle++;
        else re++;
    }

    cout << "AC x "<< ac << endl;
    cout << "WA x "<< wa << endl;
    cout << "TLE x "<< tle << endl;
    cout << "RE x " << re << endl; 
}