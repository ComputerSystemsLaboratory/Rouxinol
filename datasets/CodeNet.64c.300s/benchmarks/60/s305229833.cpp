#include<bits/stdc++.h>
using namespace std;
int a,b,n,x,y;
int main(){
  while(1){
    int memo[19][19]={0},check[19][19]={0};
    cin>>a>>b;
    if(a==0 && b==0)break;
    cin>>n;
    memo[0][1]=1;
    for(int i=0;i<n;i++){
      cin>>x>>y;
      check[x][y]=1;
    }
    for(int i=1;i<=a;i++){
      for(int j=1;j<=b;j++){
	if(check[i][j]!=1){
	  memo[i][j]=memo[i-1][j]+memo[i][j-1];
	}
      }
    }
    cout<<memo[a][b]<<endl;
  }
}