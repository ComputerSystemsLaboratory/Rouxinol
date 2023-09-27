#include <iostream>
#define N 21
using namespace std;

int main(){
  int n,m,x,y,rx,ry,l,cnt,d[N][N];
  char c;
  while(1){
    for(int i=0;i<N;i++)
      for(int j=0;j<N;j++) d[i][j]=0;
    cin>>n;
    if(!n) break;
    for(int i=0;i<n;i++) cin>>x>>y,d[N-y-1][x]=1;
    cin>>m;
    rx=ry=10;
    cnt=0;
    while(m--){
      cin>>c>>l;
      while(l--){
	if(c=='N') ry--;
	if(c=='E') rx++;
	if(c=='S') ry++;
	if(c=='W') rx--;
	if(d[ry][rx]) d[ry][rx]=0,cnt++;
      }
    }
    if(cnt==n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}