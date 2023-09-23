#include <iostream>
#include <ctype.h>
#define r(i,n) for(int i;i<n;i++)
int a,b,s;
void dfs(int i,int y,int n){
  if(!n&&y==b){
    s++;
    return;
  }
  if(y>b)return;
  if(!n||i==10)return;
  dfs(i+1,y+i,n-1);
  dfs(i+1,y,n);
}
using namespace std;
int main(){
  while(cin>>a>>b,a||b){
    s=0;
    dfs(0,0,a);
    cout<<s<<endl;
  }
}