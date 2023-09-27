#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    int t;cin >> t;
    
    rep(test,t){
        int n; cin >> n;
        vector<ll> a(n);
        rep(i,n)cin >> a[i];
        string s; cin >> s;
        
        vector<ll> dp;//遷移は基底が増えるだけ
        for(int i=n-1; i>=0; i--){
            for(ll b: dp)a[i] = min(a[i], a[i]^b);
            //minを取れば掃き出しが可能
            if(s[i]=='0'){
                dp.push_back(a[i]);//0は何個あってもいい
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