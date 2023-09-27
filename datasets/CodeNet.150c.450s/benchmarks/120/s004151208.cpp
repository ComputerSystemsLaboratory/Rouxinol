#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main(){
  int r,c;
  while(cin>>r>>c&&r&&c){
    int fld[r][c];
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>fld[i][j];
    int ans=-1;
    for(int i=0;i<(1<<r);i++){
      int cnt[c],res=0;
      memset(cnt,0,sizeof(cnt));
      for(int j=0;j<r;j++){
        if(i>>j&1){
          for(int k=0;k<c;k++)if(fld[j][k]==1)cnt[k]++;
        }else{
          for(int k=0;k<c;k++)if(fld[j][k]==0)cnt[k]++;
        }
      }
      for(int j=0;j<c;j++)res+=max(cnt[j],r-cnt[j]);
      ans=max(ans,res);
    }
    cout<<ans<<endl;
  }
  return 0;
}