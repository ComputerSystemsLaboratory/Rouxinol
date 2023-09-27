#include<iostream>
using namespace std;
void dfs(int n,int m);
char fg[111][111],fu;
int h,w;
int a[4]={-1,0,0,1};
int b[4]={0,-1,1,0};
int main(){
  while(1){
    cin >> h >> w;
    if(h==0 && w==0) break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin >> fg[i][j];
      }
    }
    int cou=0;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(fg[i][j]!='.'){
	  fu = fg[i][j];
	  dfs(i,j);
	  cou++;
	}
      }
    }
    cout << cou << endl;
  }
}

void dfs(int n,int m){
  fg[n][m] = '.';
  for(int vh=0;vh<4;vh++){
    int nh=n+a[vh];
    int nw=m+b[vh];
    if(nh>=0 && nh<h && nw>=0 && nw<w && fg[nh][nw]==fu){
      dfs(nh,nw);
    }
  }
}