#include <iostream>
#include <string>
using namespace	std;
int result,w,h;
int d1[4]={-1,0,1,0},d2[4]={0,1,0,-1};
string a[21];

void dfs(int x,int y){

  int i;

  result++;
  a[y][x]='#';
  for(i=0;i<4;i++) if(0<=y+d2[i] && y+d2[i]<h && 0<=x+d1[i] && x+d1[i]<w) if(a[y+d2[i]][x+d1[i]] == '.') dfs(x+d1[i],y+d2[i]);

}

int main(){

  int x1,y1,i,j;

  while(cin>>w>>h,w){

    result=0;
    for(i=0;i<h;i++) cin>>a[i];

    for(i=0;i<h;i++) for(j=0;j<w;j++) if(a[i][j] == '@'){
          x1=j;
          y1=i;
	}

    dfs(x1,y1);

    cout<<result<<endl;


  }

  return 0;

}