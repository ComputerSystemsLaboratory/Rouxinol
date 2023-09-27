#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
signed main(){
  int w,h;
  while(cin>>w>>h,w||h){
    int c[h][w];
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
	cin>>c[i][j];
    int ans=0;
    int ax[]={-1,0,1,-1,1,-1,0,1};
    int ay[]={-1,-1,-1,0,0,1,1,1};
    int used[h][w];
    memset(used,0,sizeof(used));
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(used[i][j]) continue;
	if(!c[i][j]) continue;
	ans++;
	queue<P> q;
	q.push(P(i,j));
	while(!q.empty()){
	  P p=q.front();q.pop();
	  int y=p.first,x=p.second;
	  //cout<<y<<" "<<x<<endl;
	  if(used[y][x]) continue;
	  if(!c[y][x]) continue;
	  used[y][x]=1;
	  for(int k=0;k<8;k++){
	    int ny=y+ay[k],nx=x+ax[k];
	    if(ny<0||ny>=h||nx<0||nx>=w) continue;
	    if(used[ny][nx]) continue;
	    if(!c[ny][nx]) continue;
	    q.push(P(ny,nx));
	  }
	}
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}