#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[100][100];
  int n;
  cin>>n;
  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
      a[i][j]=0;
    }
  }
  for(int i=0;i<n;i++){
    int u,k;
    cin>>u>>k;
    for(int j=0;j<k;j++){
      int v;
      cin>>v;
      a[u-1][v-1]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j!=(n-1)) cout<<a[i][j]<<" ";
      else cout<<a[i][j];
    }
    cout<<endl;
  }
  return 0;
}

