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
  int a,d,n;
  bool prime[1000005]={};
  int i,j;

  for(i=2;i<1000005;i++)
    if(prime[i]==false)
      for(j=2;i*j<1000005;j++)
	prime[i*j]++;
  prime[0]=prime[1]=true;

  while(1){
    cin>>a>>d>>n;
    if(a==0 && d==0 && n==0)break;
    int ans=0;
    while(1){
      if(prime[a]==false)ans++;
      if(ans==n)break;
      a+=d;
    }
    cout<<a<<endl;
  }
}