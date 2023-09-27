#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main(){
  int a,b;
  while(scanf("%d%d",&a,&b)&&a&&b){
    int fld[a][b];
    bool f[a][b];
    memset(f,true,sizeof(f));
    int n;
    scanf("%d",&n);
    while(n--){
      int x,y;
      scanf("%d%d",&x,&y);x--;y--;
      f[x][y]=false;
    }
    fld[0][0]=1;
    for(int i=1;i<a;i++){
      if(!f[i][0])fld[i][0]=0;
      else fld[i][0]=fld[i-1][0];
    }
    for(int i=1;i<b;i++){
      if(!f[0][i])fld[0][i]=0;
      else fld[0][i]=fld[0][i-1];
    }
    for(int i=1;i<a;i++){
      for(int j=1;j<b;j++){
        if(!f[i][j])fld[i][j]=0;
        else fld[i][j]=fld[i-1][j]+fld[i][j-1];
      }
    }
    printf("%d\n",fld[a-1][b-1]);
  }
}