#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define ll long long int
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

ll step(ll n)
{
  if(n==2)return 2;
  if(n==1)return 1;
  if(n==0)return 1;

  ll a=step(n-1)+step(n-2)+step(n-3);

  return a;
}

int main()
{
  int n;
  int i,j;
  while(1){
    cin>>n;
    if(n==0)break;

    ll day=(step(n)+9)/10;

    cout<<(day+364)/365<<endl;

  }
}