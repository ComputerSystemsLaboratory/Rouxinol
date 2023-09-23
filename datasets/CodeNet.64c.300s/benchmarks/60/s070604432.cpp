#include<bits/stdc++.h>
using namespace std;
int a,b,n,x,y;
int memo[19][19]={0},check[19][19]={0};
int saiki(int x,int y){
  if(check[x][y]==1)return(memo[x][y]);
  else{
      memo[x][y]=saiki(x,y-1)+saiki(x-1,y);
      check[x][y]=1;
      return memo[x][y];
  }
}
int main(){
  while(1){
    cin>>a>>b;
    if(a==0 && b==0)break;
    cin>>n;
    for(int i=0;i<=a;i++){
      for(int j=0;j<=b;j++){
	memo[i][j]=0;
	check[i][j]=0;
      }
    }
    for(int i=0;i<=a;i++){
      check[i][0]=1;
    }
    for(int i=0;i<=b;i++){
      check[0][i]=1;
    }
    memo[0][1]=1;
    for(int i=0;i<n;i++){
      cin>>x>>y;
      check[x][y]=1;
    }
    memo[0][1]=1;
    saiki(a,b);
    cout<<memo[a][b]<<endl;
  }
}