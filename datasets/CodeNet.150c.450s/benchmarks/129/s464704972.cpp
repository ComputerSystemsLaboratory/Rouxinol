//itp1_topic7_c
#include <bits/stdc++.h>
using namespace std;

int main (){
  int r,c,N[101][101],M[101],sum=0,s[101];
  cin>>r>>c;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>N[i][j];
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      M[i]+=N[i][j];
      s[j]+=N[i][j];
    }
    sum+=M[i];
  }

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<N[i][j]<<" ";
    }
    cout<<M[i]<<endl;
  }
  for(int i=0;i<c;i++){
     cout<<s[i]<<" ";
  }
  cout<<sum<<endl;
  return 0;
}
