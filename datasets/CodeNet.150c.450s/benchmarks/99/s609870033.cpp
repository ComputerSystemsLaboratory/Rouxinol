#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    rep(nn, n) {
        string s, t; cin >> s >> t;
        int num = 1;
        int a=0, b=0;
        rep(i, s.size()) {
            if (s[i]=='m') {a += num*1000; num=1;}
            else if (s[i]=='c') {a += num*100; num=1;}
            else if (s[i]=='x') {a += num*10; num=1;}
            else if (s[i]=='i') {a += num; num=1;}
            else num = s[i]-'0';
        }
        rep(i, t.size()) {
            if (t[i]=='m') {b += num*1000; num=1;}
            else if (t[i]=='c') {b += num*100; num=1;}
            else if (t[i]=='x') {b += num*10; num=1;}
            else if (t[i]=='i') {b += num; num=1;}
            else num = t[i]-'0';
        }
        int tmp = a+b;
        int m=(tmp/1000)%10, c=(tmp/100)%10, x=(tmp/10)%10, i=tmp%10;
        string ans;
        if (m) {if(m>1) ans += (m+'0'); ans+='m';}
        if (c) {if(c>1) ans += (c+'0'); ans+='c';}
        if (x) {if(x>1) ans += (x+'0'); ans+='x';}
        if (i) {if(i>1) ans += (i+'0'); ans+='i';}

        cout << ans << endl;
    }
}
