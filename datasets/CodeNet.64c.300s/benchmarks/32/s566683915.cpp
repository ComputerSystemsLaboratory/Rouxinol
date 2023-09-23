#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>

#define ll long long int

using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  ll n;
  ll i,j;
  ll a[10005];
  ll sum=0;

  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  for(i=0;i<n;i++)
    sum+=a[i];

  cout<<a[0]<<" "<<a[n-1]<<" "<<sum<<endl;
}