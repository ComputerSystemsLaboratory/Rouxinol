#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool ans[101][101];
int main(){
  int n,u,k,v;
  cin>>n;
  for(int j=0;j<n;j++){
    cin>>u>>k;
    for(int i=0;i<k;i++){
      cin>>v;
      ans[u][v]=1;
    }
  }
  for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
      cout<<ans[i][j];
      if(j==n)cout<<endl;
      else cout<<" ";
    }
  return 0;
}

