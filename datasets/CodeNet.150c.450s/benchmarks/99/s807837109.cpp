#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdio>
#include <complex>

using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i=(a); i<ll(b); i++)
#define rep(i,b) loop(i,0,b)

typedef vector<int> vi;

int m[256];
string const w = "mcxi";

int f(string const& s){
    int res = 0;
    rep(i, s.size()){
        if (isdigit(s[i])) {
            res += (s[i] - '0')*m[s[i + 1]];
            i++;
        }
        else{
            res += m[s[i]];
        }
    }
    return res;
}

string invf(int n){
    vi v{
        n / 1000, n / 100 % 10, n / 10 % 10, n % 10
    };
    string res;
    rep(i, 4){
        if (v[i] == 0) continue;
        if (v[i] != 1) {
            res.push_back('0'+v[i]);
        }
        res.push_back(w[i]);
    }
    return res;
}

int main(){
    m['m'] = 1000;
    m['c'] = 100;
    m['x'] = 10;
    m['i'] = 1;
    int n;
    while (cin >> n){
        rep(i, n){
            string s, t; cin >> s >> t;
            cout << invf(f(s) + f(t)) << endl;
        }
    }
}
    