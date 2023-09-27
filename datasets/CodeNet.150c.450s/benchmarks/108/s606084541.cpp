#include<bits/stdc++.h>
using namespace std;



int main(){
  const int MX=1e9+7;
  int a[1000][1000];
  fill(&a[0][0],&a[999][999],MX);
  for(int i=0;i<1000;i++){
    a[i][i]=0;
  }
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int w;
    cin>>w;
    int m;
    cin>>m;
    for(int t=0;t<m;t++){
      int e;
      cin>>e;
      a[w][e]=1;
    }
  }
  for(int i=1;i<=n;i++){
    for(int t=1;t<=n;t++){
      for(int k=1;k<=n;k++){
	a[t][k]=min(a[t][k],a[t][i]+a[i][k]);
      }
    }
  }
  for(int i=1;i<=n;i++){
    cout<<i<<" "<<(a[1][i]==MX? -1:a[1][i])<<endl;
  }


  
  return 0;
}

