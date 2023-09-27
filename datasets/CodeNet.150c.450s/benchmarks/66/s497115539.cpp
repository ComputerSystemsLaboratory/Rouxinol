#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> pii;

int main()
{
  int m,n;
  char u[300][15]={};
  char t[300][15]={};
  int i,j;

  cin>>n;
  rep(i,n)
    cin>>u[i];
  cin>>m;
  bool ans=false;//close
  rep(i,m){
    cin>>t[i];
    rep(j,n)
      if(strcmp(t[i],u[j])==0){
	if(ans){
	  ans=false;
	  printf("Closed by ");
	}else{
	  ans=true;
	  printf("Opened by ");
	}
	cout<<t[i]<<endl;
	goto END;
      }
    printf("Unknown %s\n",t[i]);
  END:;
  }
}