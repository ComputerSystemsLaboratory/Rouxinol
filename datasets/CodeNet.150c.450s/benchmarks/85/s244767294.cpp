
#include <bits/stdc++.h>

#define PI 3.141592653
#define rep(i,a,n) for(int i=a;i<(int)n;++i)
#define SZ(x) ((int)(x).size())	//size() unsigned -> int
#define descSort(a) sort(a.begin(),a.end(),std::greater<int>())
using namespace std;
typedef long long ll;
const ll INF = 1e9 + 7;
ll gcd(ll x,ll y){
    if(x%y==0)return y;
    return gcd(y,x%y);
}

int main(void){
    int n;
    cin>>n;
    int p[101],m[101][101];
    rep(i,1,n+1)cin>>p[i-1]>>p[i];
    rep(i,1,n+1)m[i][i]=0;
    rep(l,2,n+1){
        for(int i=1;i<=n-l+1;i++){
            int j=i+l-1;
            m[i][j]=INF;
            for(int k=i;k<=j-1;k++){
                m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
            }
        }
    }
    cout<<m[1][n]<<endl;
    return 0;
}
