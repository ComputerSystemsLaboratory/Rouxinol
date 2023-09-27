#include <bits/stdc++.h>
#define REP0(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define REPB0(i,n) for(int i=n-1;i>=0;i--)
#define REPB1(i,n) for(int i=n;i>0;i--)
#define llong long long
#define INF 2000000000
#define NIL -1
#define N 1000
using namespace std;
int LCS(string X,string Y){
  int C[N+1][N+1];
  int m=X.size();
  int n=Y.size();
  int maxl=0;
  X=' '+X;
  Y=' '+Y;
  C[0][0]=0;
  REP1(i,m) C[i][0]=0;
  REP1(i,n) C[0][i]=0;
  REP1(i,m){
    REP1(j,n){
      if(X[i]==Y[j]) C[i][j]=C[i-1][j-1]+1;
      else C[i][j]=max(C[i-1][j],C[i][j-1]);
      maxl=max(maxl,C[i][j]);
    }
  }
  return maxl;
}
int main(){
  char a[1000],b[1000];
  string s1,s2;
  int n;
  scanf("%d",&n);
  REP0(i,n){

    scanf("%s %s",a,b);
    s1=a;s2=b;
    printf("%d\n",LCS(s1,s2));
  }
  return 0;
}