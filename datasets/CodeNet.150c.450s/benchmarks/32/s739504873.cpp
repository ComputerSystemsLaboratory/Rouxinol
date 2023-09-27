#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> p;


int main()
{
  while(true) {
    ll m, nmin, nmax;
    cin >> m >> nmin >> nmax;
    if (m == 0 && nmin == 0 && nmax == 0) {
      break;
    }
    vector<ll> v(m, 0);
    for (int i = 0; i < m; i++){
      cin >> v[i];
    }
    ll tmp = 0;
    ll res = -1;
    for (int i = nmin-1; i < nmax; i++){
      if (v[i] - v[i+1] >= tmp) {
        tmp = v[i] - v[i+1];
        res = i+1;
      }
    }
    cout << res << endl;
  }
}

