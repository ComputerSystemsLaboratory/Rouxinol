#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    rep(casenum, T){
        string a; cin >> a;
        int n = a.size();
        set<string> train;
        train.insert(a);
        REP(i, 1, n){
            string b = "", c = "";
            rep(j, i) b += a[j];
            REP(j, i, n) c += a[j];
            train.insert(c + b);
            reverse(b.begin(), b.end());
            train.insert(b + c);
            train.insert(c + b);
            reverse(c.begin(), c.end());
            train.insert(b + c);
            train.insert(c + b);
            reverse(b.begin(), b.end());
            train.insert(b + c);
            train.insert(c + b);
        }
        cout << train.size() << endl;
    }
    return 0;
}