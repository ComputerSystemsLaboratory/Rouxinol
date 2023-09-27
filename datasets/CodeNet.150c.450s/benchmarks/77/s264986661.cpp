#include <bits/stdc++.h>
using namespace std;

bool pmap[25][25]={0};
int n,m,now=0,x,y,nd;
int dy[4]={1,-1,0,0},dx[4]={0,0,1,-1};

int main(){
  int i,j,k;
  char d,dummy;
  while(1){
    cin >> n;
    if(n==0)break;
    now = 0;
    x = 10;
    y = 10;
    for(i=0;i<n;i++){
      cin >> k >> j;
      pmap[k][j]=1;
    }
    cin >> m;
    //cout << m << endl;
    for(i=0;i<m;i++){
      cin>> d >> j;
      //cout << d << " "<<j<<endl;
      if(d=='N')nd=0;
      if(d=='S')nd=1;
      if(d=='E')nd=2;
      if(d=='W')nd=3;
      for(k=0;k<j;k++){
	x+=dx[nd];
	y+=dy[nd];
	if(pmap[x][y]){
	  pmap[x][y]=0;
	  now++;
	}
      }
    }
    if(now==n)cout <<"Yes"<<endl;
    else cout <<"No"<<endl;
    for(i=0;i<21;i++)for(j=0;j<21;j++)pmap[i][j]=0;
  }
  return 0;
}

