#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int mat[101][101];

int main(int argc,char* argv[]){
  memset(mat,0,sizeof(mat));
  int n,v,cnt,x;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>v>>cnt;
    for(int j=0;j<cnt;j++){
      cin>>x;
      mat[v][x]=1;
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<mat[i][j];

      if(j!=n)
	cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}