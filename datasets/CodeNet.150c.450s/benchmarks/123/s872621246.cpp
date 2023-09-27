#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool Sieve(int x)
{
  for(int i=2;i<=sqrt(x);i++) if(x%i==0) return false;
  return true;
}
int main()
{
  int n;
  vector<int> items;
  //input
  cin >> n; items.resize(n);
  for(int i = 0; i < n; i++)cin >> items[i];
  
  //process
  int count = 0;
  for(int i=0;i<n;i++) if(Sieve(items[i])) count++;
  cout<<count<<endl;
  return 0;
}

