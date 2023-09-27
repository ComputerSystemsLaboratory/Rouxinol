#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define per(i,n) for(int i=int(n)-1; i>=0; i--)
using namespace std;
using ll = long long;

int main(){
    int t;cin >> t;
    
    rep(test,t){
        int n; cin >> n;
        vector<ll> a(n);
        rep(i,n)cin >> a[i];
        string s; cin >> s;
        
        set<ll, greater<ll>> dp;//遷移は基底が増えるだけ
        per(i,n){
            for(ll b: dp)a[i] = min(a[i], a[i]^b);
            //minを取れば掃き出しが可能
            if(s[i]=='0'){
                dp.insert(a[i]);
                //0は何個あってもいい
                //基底の大小はともかく
            }else if(a[i]!=0){
                //1のターンで新しい基底を取れたなら終了
                dp.clear();
                break;
            }
        }
        if(dp.empty())
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    
    return 0;
}