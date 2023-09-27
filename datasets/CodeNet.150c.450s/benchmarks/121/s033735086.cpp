#include <iostream>
using namespace std;
char a[102][102];
 
void dfs(int  m,int n,char o){
  if(a[m][n]!=o){
    return ;
  }
  a[m][n]=0;
  dfs(m+1,n,o);
  dfs(m,n+1,o);
  dfs(m-1,n,o);
  dfs(m,n-1,o);
}
int main(){
  while(1){
    int b,c;
    cin >> b >> c;
    if(b==0 && c==0)
      break;
    for(int i=1;i<=b;i++){
      for(int j=1;j<=c;j++){
    cin >> a[i][j];
      }
    }
    int d=0;
    for(int i=1;i<=b;i++){
      for(int j=1;j<=c;j++){
    if(a[i][j]!=0){
      d++;
      dfs(i,j,a[i][j]);
    }
      }
    }
    cout << d << endl;
  }
  return 0;
}