#include <iostream>
using namespace std;
int m[50][50],a,b,c,d,e,cou;

void dfs(int i,int j){
  if(i==b&&j==a)cou++;
  if(m[i+1][j]==0&&i+1<=b)dfs(i+1,j);
  if(m[i][j+1]==0&&j+1<=a)dfs(i,j+1);
}

int main(){
  while(1){
    cin >>a>>b;
    if(a==0&&b==0)break;
    for(int i=1;i<=b;i++){
      for(int j=1;j<=a;j++){
	m[i][j]=0;
      }
    }
    cin >>c;
    for(int i=0;i<c;i++){
      cin >>d>>e;
      m[e][d]=1;
    }

    cou=0;
    dfs(1,1);
    cout << cou <<endl;
  }
  return 0;
}