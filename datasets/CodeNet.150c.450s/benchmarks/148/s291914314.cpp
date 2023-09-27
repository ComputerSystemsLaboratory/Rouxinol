#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<string> S(N);
    for (ll i=0; i<N; i++) {
        cin >> S[i];
    }
    vector<ll> ans(4,0);
    for (ll i=0; i<N; i++) {
        if (S[i]=="AC") {
            ans[0]++;
        }
        else if (S[i]=="WA") {
            ans[1]++;
        }
        else if (S[i]=="TLE") {
            ans[2]++;
        }
        else {
            ans[3]++;
        }
    }
    vector<vector<string>> format(4,vector<string> (2));
    format[0][0] = "AC";
    format[1][0] = "WA";
    format[2][0] = "TLE";
    format[3][0] = "RE";
    for (int i=0; i<4; i++) {
        format[i][1] = " x ";
    }

    for (int i=0; i<4; i++) {
        cout << format[i][0] << format[i][1] << ans[i] << endl;
    }
}