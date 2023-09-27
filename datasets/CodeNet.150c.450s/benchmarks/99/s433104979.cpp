#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int chnum(string s) {
    int slen = s.length();
    int res = 0;
    for(int i = 0; i < slen; ++i) {
        if(i == 0) {
            if(s[i] == 'm') res += 1000;
            else if(s[i] == 'c') res += 100;
            else if(s[i] == 'x') res += 10;
            else if(s[i] == 'i') res += 1;
        }else {
            if(s[i] == 'm') {
                if(s[i-1] != 'c' && s[i-1] != 'x' && s[i-1] != 'i') {
                    int ch = s[i-1] - '0';
                    res += (1000*ch);
                }else res += 1000;
            }else if(s[i] == 'c') {
                if(s[i-1] != 'm' && s[i-1] != 'x' && s[i-1] != 'i') {
                    int ch = s[i-1] - '0';
                    res += (100*ch);
                }else res += 100;
            }else if(s[i] == 'x') {
                if(s[i-1] != 'm' && s[i-1] != 'c' && s[i-1] != 'i') {
                    int ch = s[i-1] - '0';
                    res += (10*ch);
                }else res += 10;
            }else if(s[i] == 'i') {
                if(s[i-1] != 'm' && s[i-1] != 'c' && s[i-1] != 'x') {
                    int ch = s[i-1] - '0';
                    res += ch;
                }else res += 1;
            }
        }
    }
    return res;
}

int n;

int main() {
    cin >> n;
    while(n--) {
        string l, r; cin >> l >> r;
        int nl = chnum(l), nr = chnum(r);
        int sum = nl + nr;
        int mc = sum/1000;
        sum %= 1000;
        int cc = sum/100;
        sum %= 100;
        int xc = sum/10;
        sum %= 10;
        int ic = sum;
        string ans;
        if(mc != 0) {
            if(mc != 1) {
                char mch = mc+'0';
                ans.push_back(mch);
            }
            ans.push_back('m');
        }
        if(cc != 0) {
            if(cc != 1) {
                char cch = cc+'0';
                ans.push_back(cch);
            }
            ans.push_back('c');
        }
        if(xc != 0) {
            if(xc != 1) {
                char xch = xc+'0';
                ans.push_back(xch);
            }
            ans.push_back('x');
        }
        if(ic != 0) {
            if(ic != 1) {
                char ich = ic+'0';
                ans.push_back(ich);
            }
            ans.push_back('i');
        }
        cout << ans << endl;
    }
}
