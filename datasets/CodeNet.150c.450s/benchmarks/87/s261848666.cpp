#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
#define INF 1LL<<30
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()

int main(){
    while(1){  
        int h;
        cin>>h;
        if(h==0) return 0;
        
        int table[10][5],table_cp[10][5];
        rep(i,h) rep(j,5) cin>>table[i][j];

        bool flag=true;
        int ans=0;
        while(flag){
            rep(i,h) rep(j,5) table_cp[i][j]=table[i][j];

            flag=false;

            for(int i=h;i>=0;i--){
                for(int j=1;j<4;j++){
                    if(table[i][j] && table[i][j-1]==table[i][j] && table[i][j]==table[i][j+1]){
                        flag=true;
                        table_cp[i][j-1]=0;
                        table_cp[i][j]=0;
                        table_cp[i][j+1]=0;
                    }
                }
            }

            rep(i,h) rep(j,5) ans+=table[i][j]-table_cp[i][j];
            
            int cnt=h;
            while(cnt--){
                for(int i=h-1;i>0;i--){
                    rep(j,5){
                        if(table_cp[i][j]==0){
                            table_cp[i][j]=table_cp[i-1][j];
                            table_cp[i-1][j]=0;
                        }
                    }
                }
            }
            
            rep(i,h){
                rep(j,5){
                    table[i][j]=table_cp[i][j];
                }
            }
        }

        cout<<ans<<endl;
    }
    
}

