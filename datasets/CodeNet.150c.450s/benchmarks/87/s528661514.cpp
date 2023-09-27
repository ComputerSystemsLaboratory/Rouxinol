#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int g[11][5];
bool used[11][5];
int main(){
    int h;
    while(cin>>h,h){
        int s=0;
        rep(i,h)rep(j,5) cin>>g[i][j];
        while(1){
            bool update=false;
            rep(i,h){
                int cnt=1;
                FOR(j,1,5){
                    if(g[i][j]!=0&&g[i][j]==g[i][j-1]) ++cnt;
                    else{
                        if(cnt>=3){
                            s+=g[i][j-1]*cnt,update=true;
                            rep(k,cnt) g[i][j-1-k]=0;
                        }
                        cnt=1;
                    }
                }
                if(cnt>=3){
                    s+=g[i][4]*cnt,update=true;
                    rep(k,cnt) g[i][4-k]=0;
                }
            }
            if(!update) break;
            rep(j,5){
                int cnt=0;
                rep(i,h){
                    if(g[h-i-1][j]!=0){
                        swap(g[h-cnt-1][j],g[h-i-1][j]);
                        ++cnt;
                    }
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
