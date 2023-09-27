#include <iostream>
using namespace std;

int main(){
  int a,b,c,d,g[101][101];
  cin>>a;
  for(int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
      g[i][j]=0;
    }
  }
  for(int i=0;i<a;i++){
    cin>>b>>c;
    for(int j=0;j<c;j++){
      cin>>d;
      g[b][d]=1;
    }
  }
  for(int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
      cout<<g[i][j];
      if(a-j>=1)cout<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}