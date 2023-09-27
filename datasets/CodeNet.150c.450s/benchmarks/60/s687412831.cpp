#include<iostream>
using namespace std;
int main(){
  int n,k,u,num;
  int g[150][150]={};
	
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>num;
      g[u][num]=1;          //numは各頂点を表す。
    }
  }
	
  for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		cout<<g[i][j];
		if(j!=n){
			cout<<" ";
		}
	}
  	cout<<"\n";
  }
	return 0;
}
