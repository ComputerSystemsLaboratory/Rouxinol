//テスト
#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<int(N);++i)
using ll = long long;
const int INF = 2147483647;
const ll MOD = 1000000007;
// const ll INF = 1000000000000000000LL;

//減少のことは考えないで最大をとる

int main(){
    int d;
    cin >> d;
    vector<int> c(26);
    rep(i,26) cin >> c[i];
    vector<vector<int>> s(d,vector<int>(26));
    rep(i,d){
        rep(j,26){
            int input;
            cin >> input;
            // s[i][j] = make_pair(input,j);
            s[i][j] = input;
        }
    }  
    //答え
    vector<int> t(d);
    rep(i,d) cin >> t[i];
    vector<int> v(d);
    ll sum=0;
    vector<int> last(26);
    rep(i,d){
        sum+=s[i][t[i]-1];
        last[t[i]-1]=i+1;
        // cout << s[i][t[i]-1] << endl;
        //減少
        ll minus=0;
        rep(j,26){
            minus+=c[j]*(i+1-last[j]);
        }
        sum-=minus;
        v[i] = sum;
    }   
    rep(i,d) cout << v[i] << endl;
}
