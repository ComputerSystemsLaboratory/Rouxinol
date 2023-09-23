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
  int n,m,p,x;
  int num[105]={};
  int i;

  while(1){
    cin>>n>>m>>p;
    if(n==0 && m==0 && p==0)break;
    ll sum=0LL;
    rep(i,n){
      cin>>x;
      num[i+1]=x;
      sum+=x;
    }
    sum=sum*(100-p);
    if(num[m])
      cout<<sum/num[m]<<endl;
    else 
      cout<<"0"<<endl;
  }

}