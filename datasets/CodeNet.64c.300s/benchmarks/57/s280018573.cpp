#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int h,w;
    cin>>h>>w;
    if(!h&&!w)break;
    bool mp[11][10001];
    for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>mp[i][j];
    
    int ans=0;
    for(int i=0;i<(1<<h);i++){
      int cnt=0;
      for(int j=0;j<w;j++){
	int c=0;
	for(int k=0;k<h;k++)c+=((i>>k)&1) ? !mp[k][j]:mp[k][j];
	cnt+=max(c,h-c);
      }
      ans=max(ans,cnt);
    }
    cout <<ans<<endl;
  }
    return 0;
  }