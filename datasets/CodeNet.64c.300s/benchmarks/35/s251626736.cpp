#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int list[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      list[i][j]=0;
    }
  }
  for(int i=0;i<n;i++){
    int u,k,to;
    cin>>u>>k;
    u--;
    for(int j=0;j<k;j++){
      cin>>to;
      to--;
      for(int l=0;l<n;l++){
	if(l==to){
	  list[u][l]=1;
	}else{
	}
      }
    }
  }
  //print
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
      cout<<list[i][j]<<" ";
    }
    cout<<list[i][n-1]<<endl;
  }
  return 0;
}

