#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++)
    cin >> a[i];

  for(int i = 0; i < n; i++)
  {
    if(i != 0)
      cout << " " << flush;

    cout << a[n-1-i] << flush;
  }
  cout << endl;
  return 0;
}