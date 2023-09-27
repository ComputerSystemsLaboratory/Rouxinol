#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0; i<n;i++)
using namespace std;

int main()
{
  int n,k;
  cin >> n >> k;
  vector<long int> a(n);
  rep(i,n) cin >> a[i];
  for(int i=k;i<n;i++){
    if(a[i-k]<a[i])
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}