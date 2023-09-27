#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m,l; cin>>n>>m>>l;
    int a[n][m];
    int b[m][l];
    for ( int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int v; cin>>v;
            a[i][j]=v;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++ ){
            int w; cin>>w;
            b[i][j]=w;
        }
    }

    long long ans[n][l];
    for (int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            ans[i][j]=0;
            for(int k=0; k<m; k++){
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            if(j==l-1) cout<<ans[i][j]<<endl;
            else cout<<ans[i][j]<<' ';
        }
    }
    return 0;
}
