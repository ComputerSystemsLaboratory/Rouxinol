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
int H;
int fld[5][10];
void drop(){
      REP(i,5){
            REP(j,H){
                  if(fld[i][j]==-1){
                        for(int k=j;k<H;k++){
                              if(fld[i][k]!=-1){
                                    int tmp=fld[i][k];
                                    fld[i][k]=fld[i][j];
                                    fld[i][j]=tmp;
                                    break;
                              }
                        }
                  }
            }
      }
}
int main(){
      while(cin>>H&&H){
            memset(fld,-1,sizeof(fld));
            for(int i=H-1;i>=0;i--)REP(j,5)cin>>fld[j][i];
            bool update=true;
            ll ans=0;
            while(update){
                  update=false;
                  REP(i,H){
                        int s,e,d=0;bool change=false;
                        while(d<5){
                              if(fld[d][i]==-1){
                                    d++;
                                    continue;
                              }
                              s=d;
                              while(fld[s][i]==fld[d][i]&&d<5)d++;
                              if(d-s>=3){
                                    e=d;
                                    change=true;
                                    break;
                              }
                        }
                        if(change){
                              update=true;
                              ans+=(e-s)*fld[s][i];
                              for(int j=s;j<e;j++)fld[j][i]=-1;
                        }
                  }
                  drop();
            }
            cout<<ans<<endl;
      }
      return 0;
}