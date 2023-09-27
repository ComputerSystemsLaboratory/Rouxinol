#include <iostream>
#include <cstring>
using namespace std;
#define maxn 1000000

int  isprime(int n)
{
  
  bool prime[maxn];
  int p = 0;
  memset(prime,true,sizeof(prime));
  prime[0] = prime[1] = false;
  for(int i=2;i<=n;i++)
  {
    if(prime[i])
    {
      for(int j=2*i;j<=n;j+=i) prime[j] = false;
      p++;
    }
  }

  return p;
}

int main()
{

    int n;
    while(cin>>n)
    {
      cout<<isprime(n)<<endl;
    }
    return 0;
}