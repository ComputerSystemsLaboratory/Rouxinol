#include <bits/stdc++.h>
using namespace std;

int main()
{
  long n, a, res, t;
  
  while (cin >> n, n){
    res = -100000000;
    t = 0;
    for(int i = 0; i < n; i++){
      cin >> a;
      t = max(t + a, a);
      res = max(res, t);
    }
    cout << res << endl;
  }
}