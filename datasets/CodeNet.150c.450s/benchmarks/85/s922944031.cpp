#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
#define INF 1LL<<30
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()

int main() {
    int n;
    cin>>n;
    int m[n+1][n+1],p[n+1];
    rep(i,n){
        cin>>p[i]>>p[i+1];
        m[i][i]=0;
    }
    m[n][n]=0;
    for(int l=2;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){
            int j=i+l-1;
            m[i][j]=1000000;
            for(int k=i;k<j;k++){
                m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
            }
        }
    }

    cout<<m[1][n]<<endl;
}


