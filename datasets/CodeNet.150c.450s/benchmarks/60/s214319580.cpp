#include <iostream>
using namespace	std;
int main(){

  int n,graph[100][100]={},a,b,tmp;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    for(int j=0;j<b;j++){
      cin>>tmp;
      graph[a-1][tmp-1]=1;
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j) cout<<" ";
      cout<<graph[i][j];
    }
    cout<<endl;
  }

  return 0;

}