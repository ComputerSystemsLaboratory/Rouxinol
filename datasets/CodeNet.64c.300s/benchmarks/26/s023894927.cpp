#include <iostream>
#include <cstdio>
using namespace std;

long pow(int n,int m);


int main()
{
  int n,m;
  cin >> m >> n;

  cout << pow(n,m) << endl;
}

long pow(int n,int m)
{
  long long  x=m;
  long ans=1;
  
  int m2 =m*m;

  while(n>0){
    if(n & 1) ans = ans*x;
    x = (x*x)%1000000007;
    n >>= 1;
    ans = ans%1000000007;
    //cout << x << endl;
  }
  return ans;
}