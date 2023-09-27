#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void)
{
  int i;
  int n;
  long long int sum=1;

  cin>>n;

  for(i=1;i<=n;i++)
    {
      sum*=i;
    }

  cout<<sum<<endl;

}