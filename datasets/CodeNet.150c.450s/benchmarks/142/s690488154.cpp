#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n,k;
  cin>>n>>k;
  ll a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=k; i<n; i++)
  {
    if(a[i]>a[i-k])
      cout<<"Yes"<<"\n";
    else
      cout<<"No"<<"\n";
  }
  
}