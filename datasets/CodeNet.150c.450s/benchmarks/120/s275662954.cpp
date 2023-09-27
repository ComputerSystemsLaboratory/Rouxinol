#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(),(a).end()
#define MOD 100000
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
const int INF=1e9;
int R,C;
bool fld[10000][10];
void rev(int r){
      REP(i,C)fld[i][r]^=1;
}
int main(){
      while(cin>>R>>C&&(R||C)){
            REP(i,R)REP(j,C)cin>>fld[j][i];
            int ans=0;
            REP(i,1<<R){
                  int sum=0;
                  REP(j,R)if(i>>j&1)rev(j);
                  REP(j,C){
                        int cnt=0;
                        REP(k,R)if(!fld[j][k])cnt++;
                        sum+=max(R-cnt,cnt);
                  }
                  ans=max(ans,sum);
                  REP(j,R)if(i>>j&1)rev(j);
            }
            cout<<ans<<endl;
      }
}