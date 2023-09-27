#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll =  long long ;
using P = pair<int,int> ;
const int INF = 1e9;
const int MOD = 1000000007;
int MX = 1500005;

vector<int> count(int p,vector<int> A){
    vector<int> res(MX,0);
    rep(i,p){
        int a = 0;
        for(int j=i;j<p;j++){
            a += A[j];
            ++res[a];
        }
    }
    return res;
}

int main(){
    while(1){
        int n,m;
        cin >> n >> m;
        if(n==0 && m==0) break;
        ll ans = 0;
        vector<int> a(n),b(m);
        rep(i,n) cin >> a[i];
        rep(i,m) cin >> b[i];
        vector<int> V = count(n,a);
        vector<int> H = count(m,b);
        rep(i,MX){
            ans += V[i] * H[i];
        }
        cout << ans << endl;

    }
    return 0;
}
