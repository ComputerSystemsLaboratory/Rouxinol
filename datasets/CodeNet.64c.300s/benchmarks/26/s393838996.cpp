#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(a) a.begin(), a.end()
#define P pair<int, int>
#define F first
#define S second
#define mod 1000000007
#define INF 40000000000000000
int dx8[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy8[8] = {1, 1, 1, 0, -1, -1, -1, 0};
int dx4[4] = {-1, 0, 1, 0};
int dy4[4] = {0, -1, 0, 1};
int mod_pow(int x,int n,int m){
    int res=1;
    while(n>0){
        if(n&1)res=res*x%m;
        x=x*x%m;
        n>>=1;
    }
    return res;
}
signed main(void) {
    int M,N;cin>>M>>N;
    cout<<mod_pow(M,N,mod)<<endl;
}

