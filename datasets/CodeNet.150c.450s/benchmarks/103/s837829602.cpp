#include<iostream>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define MOD 100000
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

int ans=0;

void sum(int num, int s, int max)//??????????????°????????????????????????????????§???
{
  int i;
  if(num==0 && s==0)
    ans++;
  if(num<=0 || s<0 || max<0)return;

  for(i=max;i>=0;i--)
    sum(num-1,s-i,i-1);
  return;

}

int main()
{
  int n,s;
  while(1){
    cin>>n>>s;
    ans=0;
    if(n==0 && s==0)break;
    if(n*(19-n)/2<s || n*(n-1)/2>s){
      cout<<"0"<<endl;
      continue;
    }
    sum(n,s,9);
    cout<<ans<<endl;
  }
}