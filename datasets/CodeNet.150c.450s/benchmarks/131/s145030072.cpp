#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int a0, l;

int vec_int(vector<int> &y) {
    int now = 1;
    int res = 0;
    for(int i = 0; i < l; ++i) {
        res += y[i]*now;
        now *= 10;
    }
    return res;
}

int ai(int x) {
    vector<int> xvec(l, 0);
    int tenmax = pow(10, l);
    for(int i = 0; i < l; ++i) {
        int xch = x%tenmax;
        tenmax /= 10;
        int inx = xch/tenmax;
        xvec[i] = inx;
        x -= tenmax*inx;
    }
    sort(xvec.begin(), xvec.end());
    int xmax = vec_int(xvec);
    sort(xvec.begin(), xvec.end(), greater<int>());
    int xmin = vec_int(xvec);
    return xmax-xmin;
}

int main() {
    while(1) {
        cin >> a0 >> l;
        if(a0 == 0 && l == 0) break;
        map<int, int> mcnt;
        int ch = 1;
        mcnt[a0] = ch;
        int xans = 0, jans = 0, ijans = 0;
        while(1) {
            a0 = ai(a0);
            if(mcnt[a0] != 0) {
                xans = a0;
                jans = mcnt[a0]-1;
                ijans = ch+1-mcnt[a0];
                break;
            }else mcnt[a0] = ch+1;
            ch++;
        }
        cout << jans << " " << xans << " " << ijans << endl;
    }
}
