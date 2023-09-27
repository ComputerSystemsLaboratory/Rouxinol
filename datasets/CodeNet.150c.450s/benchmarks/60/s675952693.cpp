#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a[105][105]={};
  cin >> n;
  for(int i=0;i<n;i++){
    int u,k;
    cin >> u >> k;
    for(int j=0;j<k;j++){
      int v;
      cin >> v;
      a[u-1][v-1]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j)cout << " " ;
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}