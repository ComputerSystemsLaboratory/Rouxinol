#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;


int main(){
  int j,k;
  char s[1001],t[1001];
  int dis[1001][1001];
  cin>>s>>t;
  int m=strlen(s);
  int n=strlen(t);
  //cout<<m<<n<<endl;
  for(j=1;j<=m;j++){
    dis[j][0]=j;
  }
  for(j=1;j<=n;j++){
    dis[0][j]=j;
  }
  for(j=1;j<=m;j++){
    for(k=1;k<=n;k++){
      dis[j][k]=min(dis[j-1][k]+1,min(dis[j][k-1]+1, (s[j-1]==t[k-1] ? dis[j-1][k-1] : dis[j-1][k-1] + 1 )));
    }
  }
  cout<<dis[m][n]<<endl;
  return 0;
}