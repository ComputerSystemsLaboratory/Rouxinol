#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define FORR(i,a,b) for(int i=b-1;i>=a;i--)

#define DEBUG(x) cerr<<#x<<": "<<(x)<<endl

int h;
int w = 5;
int mp[12][5];

int main(){
    while(true){
        cin>>h;
        if(h==0)break;
        REP(i,h)REP(j,w)cin>>mp[i][j];
        int ans = 0;
        while(true){
            bool flag = false;
            REP(i,h){
                REP(j,3){
                    int v = mp[i][j];
                    if(v==0)continue;
                    int k = j+1;
                    while(k<w && mp[i][k]==v)k++;
                    if(k-j<3)continue;
                    ans += v * (k-j);
                    FOR(x,j,k)mp[i][x] = 0;
                    flag = true;
                    break;
                }
            }
            if(!flag)break;
            FORR(i,1,h)REP(j,w)if(mp[i][j]==0){
                int y = -1;
                FORR(k,0,i)if(mp[k][j]!=0){
                    y = k; break;
                }
                if(y==-1)continue;
                swap(mp[i][j], mp[y][j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

