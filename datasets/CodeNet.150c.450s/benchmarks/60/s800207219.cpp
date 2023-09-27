#include <iostream>
#include <cstdio>
#define MAX 101

using namespace std;


int main(){
  int n; cin>>n;
  int a[MAX][MAX]={};
  for(int i=1;i<=n;i++){
    int u,k; cin>>u>>k;
    for(int j=0;j<k;j++){
      int v; cin>>v;
      a[i][v]=1;
    }
  }
  for(int r=1;r<=n;r++){
    for(int c=1;c<=n;c++){
      cout<<a[r][c];
      if(c==n){
        cout<<endl;
      }else{
        cout<<' ';
      }
    }
  }

}