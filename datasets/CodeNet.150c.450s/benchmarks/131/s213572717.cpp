#include <bits/stdc++.h>
#define For(i, a, b) for(int (i)=(int)(a); (i)<(int)(b); ++(i))
#define rFor(i, a, b) for(int (i)=(int)(a)-1; (i)>=(int)(b); --(i))
#define rep(i, n) For((i), 0, (n))
#define rrep(i, n) rFor((i), (n), 0)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef unsigned long long ulint;
typedef pair<int, int> pii;
typedef pair<int, lint> pil;
typedef pair<lint, lint> pll;
template<class T>bool chmax(T &a, const T &b){if(a<b){a=b; return true;} return false;}
template<class T>bool chmin(T &a, const T &b){if(a>b){a=b; return true;} return false;}

constexpr lint mod = 1e9+7;
constexpr lint INF = mod*mod;
constexpr int MAX = 100010;

string f(int n, int L){
    string ret;
    rep(_, L-to_string(n).size()) ret += "0";
    ret += to_string(n);
    return ret;
}

int main(){
    string s;
    int L;
    while(cin >> s >> L && L){
        map<int, int> mp;
        s = f(stoi(s), L);
        for(int i=0;;++i){
            if(mp.find(stoi(s)) != mp.end()){
                int j = mp[stoi(s)];
                cout << j << " " << stoi(s) << " " << i-j << "\n";
                break;
            }
            mp[stoi(s)] = i;
            string t = s;
            sort(s.begin(), s.end());
            sort(t.begin(), t.end(), greater<>());
            s = f(stoi(t) - stoi(s), L);
        }
    }
}
