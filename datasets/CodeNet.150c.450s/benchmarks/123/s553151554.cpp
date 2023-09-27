#include<bits/stdc++.h>
using namespace std;

bool isprime(int x)
{
  if(x == 2) return true;

  if(x < 2 || x % 2 == 0) return false;

  for(int i=3;i*i <= x;i+=2)
    {
      if(x % i == 0)return false;
    }
  return true;
}
int main(){
  int n,x;
  int cnt=0;

  cin >> n;
  
  for(int i=0;i < n;i++)
    {
      cin >> x;
      if( isprime(x) ) cnt++;
    }
  cout << cnt << endl;
  return 0;
}

