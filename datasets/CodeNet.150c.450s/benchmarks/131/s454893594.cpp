#include <bits/stdc++.h>
  
using namespace std;
  
#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define repr(i, n) REPR(i, n, 0)
#define REPR(i, s, e) for(int i=(int)(s-1); i>=(int)(e); i--)
#define pb push_back
#define all(r) r.begin(),r.end()
#define rall(r) r.rbegin(),r.rend()
#define fi first
#define se second
  
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
const int INF = 1e9;
const ll MOD = 1e9 + 7;
double EPS = 1e-8;

unordered_map<string, int> mp;
string toStr(int x) {
    string s;
    while(x > 0) {
        s += (char)(x%10 + '0');
        x /= 10;
    }
    reverse(all(s));
    return s;
}
int toInt(string s) {
    int ret = 0;
    rep(i, s.size()) {
        ret *= 10;
        ret += s[i] - '0';
    }
    return ret;
}

string calc(string s, int n) {
    sort(all(s));
    string t = s;
    reverse(all(t));
    string ret = toStr(toInt(t) - toInt(s));
    while(ret.size() < n) ret = "0" + ret;
    return ret;
}

int main(){
    string s;
    int n;
    while(cin >> s >> n) {
        if(s == "0" && n == 0) break;
        mp.clear();
        int cnt = 0;
        while(s.size() < n) s = "0" + s;
        mp[s] = cnt++;
        while(1) {
            s = calc(s, n);
            if(mp.count(s)) {
                cout << mp[s] << " " << toInt(s) << " " << cnt - mp[s] << endl;
                break;
            }
            else {
                mp[s] = cnt++;
            }
        }
    }
    return 0;
}
