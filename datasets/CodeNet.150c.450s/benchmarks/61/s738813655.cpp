#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<stdlib.h>
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
  int i,j;
  int n,a,b,c,x;
  int y[100]={};
  while(1){ 
    cin>>n>>a>>b>>c>>x;
    if(n+a+b+c==0)break;
    rep(i,n)
      cin>>y[i];
    int ans=0;
    i=0;
    while(1){
      if(x==y[i])i++;
      int next=(a*x+b)%c;
      x=next;
      if(i==n)break;
      ans++;
      if(ans>10000)break;
    }
    if(ans>10000)
      cout<<"-1"<<endl;
    else
      cout<<ans<<endl;
  }
}