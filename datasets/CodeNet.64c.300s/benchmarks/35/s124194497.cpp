#include <iostream>
using namespace std;

int main(){
  int n,u,k,b[120][120],a;
  cin>>n;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      b[i][j]=0;   
    }
  }
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>a;
      b[u][a]=1;
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<b[i][j];
      if(j<n)cout<<" ";
    }
    cout<<endl;
  }

  return 0;
}