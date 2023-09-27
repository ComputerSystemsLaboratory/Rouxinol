#include<iostream>
using namespace std;

int main(){

  int n,k,v,u;
  cin>>n;

  double V[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

      V[i][j]=0;
    }
  }
  for(int i=0;i<n;i++){
    cin>>u;
    cin>>k;
    for(int j=0;j<k;j++){
      cin>>v;
      V[u-1][v-1]=1;
    }


  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<V[i][j];
      if(j!=n-1){
	cout<<" ";
      }
  }
    cout<<endl;
  }

  return 0;
}

