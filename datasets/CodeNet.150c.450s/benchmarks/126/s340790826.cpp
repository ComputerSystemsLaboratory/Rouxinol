#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define INF (1<<29)
using namespace std;
typedef long long ll;
int d[40][40];
int main(){
      int a,b,n,x,y;
      while(cin>>a>>b&&a&&b){
            cin>>n;
            bool ok[40][40];
            memset(d,0,sizeof(d));
            memset(ok,true,sizeof(ok));
            REP(i,n){cin>>x>>y;ok[--x][--y]=false;}
            d[0][0]=1;
            REP(i,a-1)if(ok[i+1][0])d[i+1][0]=d[i][0];
            REP(i,b-1)if(ok[0][i+1])d[0][i+1]=d[0][i];
            for(int i=1;i<b;i++){
                  for(int j=1;j<a;j++){
                        if(ok[j][i])d[j][i]=d[j-1][i]+d[j][i-1];
                  }
            }
            //REP(i,b)REP(j,a)printf("%d%c",d[j][i],j==a-1?'\n':' ');
            cout<<d[a-1][b-1]<<endl;
      }
}