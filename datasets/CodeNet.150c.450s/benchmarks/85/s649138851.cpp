#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i< (n);i++)
using namespace std;
typedef long long ll;
const int INF = (1e+9)+7;

int main(){
    int n;cin>>n;
    vector<vector<int>> C(n+1,vector<int>(n+1,0));
    //↑pの為に一つ多く作った。index番号が行列の番号と一致。
    vector<int> p(n+1);
    rep(i,n){
        int a,b;cin>>a>>b;
        if(i == 0){
            p[0] = a;
            p[1] = b;
        }else{
            p[i+1] = b;
        }
    }
    for(int l = 2;l<=n;l++){
        //lは行列の個数.
        for(int i = 1; i+l-1 <= n; i++){
            int j = i+l-1;//左端のindex
            int mn = INF;
            for(int k = i;k<j;k++){
                mn = min(mn,C[i][k]+C[k+1][j]+p[i-1]*p[k]*p[j]);
            }
            C[i][j] = mn;
        }
    }
    cout<<C[1][n]<<endl;
    return 0;
}
