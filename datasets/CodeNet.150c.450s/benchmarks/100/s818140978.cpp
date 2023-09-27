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
  int n;
  ll ans=1;
  int i;
  cin>>n;

  for(i=n;i>1;i--)
    ans*=i;
  cout<<ans<<endl;

}