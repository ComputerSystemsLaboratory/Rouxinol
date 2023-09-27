#include <bits/stdc++.h>
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}
typedef long long int ll;

#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define endl "\n"
const double EPS = 1e-7;
const int INF = 1 << 30;
const ll LLINF = 1LL << 60;
const double PI = acos(-1);
const int MOD = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//-------------------------------------

int toi(string s) {
    int res = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'm') {
            if(i == 0) {
                res += 1000;
            } else {
                res += 1000 * (s[i - 1] - '0');
            }
        } else if(s[i] == 'c') {
            if(i == 0 || s[i - 1] == 'm') {
                res += 100;
            } else {
                res += 100 * (s[i - 1] - '0');
            }
        } else if(s[i] == 'x') {
            if(i == 0 || (s[i - 1] == 'c' || s[i - 1] == 'm')) {
                res += 10;
            } else {
                res += 10 * (s[i - 1] - '0');
            }
        } else if(s[i] == 'i') {
            if(i == 0 ||
               (s[i - 1] == 'x' || s[i - 1] == 'c' || s[i - 1] == 'm')) {
                res += 1;
            } else {
                res += 1 * (s[i - 1] - '0');
            }
        }
    }
    return res;
}

string tos(int n) {
    string res = "";
    int c = n / 1000;
    if(c == 1) {
        res += "m";
    } else if(c > 1) {
        res += to_string(c) + "m";
    }
    n -= 1000 * c;
    c = n / 100;
    if(c == 1) {
        res += "c";
    } else if(c > 1) {
        res += to_string(c) + "c";
    }
    n -= 100 * c;
    c = n / 10;
    if(c == 1) {
        res += "x";
    } else if(c > 1) {
        res += to_string(c) + "x";
    }
    n -= 10 * c;
    c = n / 1;
    if(c == 1) {
        res += "i";
    } else if(c > 1) {
        res += to_string(c) + "i";
    }
    return res;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        string s, t;
        cin >> s >> t;
        cout << tos(toi(s) + toi(t)) << endl;
    }
}
