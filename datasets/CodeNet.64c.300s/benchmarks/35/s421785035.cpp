#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[110][110] = {};
  for(int i=1;i<=n;i++){
    int u,k;
    cin>>u>>k;
    for(int j=0;j<k;j++){
      int v;
      cin>>v;
      a[i][v]=1;
    }
  }
  for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(j!=n){
	cout<<a[i][j]<<" ";
      }else{
	cout<<a[i][j]<<endl;
      }
    }
  }
}