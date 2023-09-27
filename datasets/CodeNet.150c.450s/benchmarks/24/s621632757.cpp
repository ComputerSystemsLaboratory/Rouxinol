#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define Rep(i, N) for(int i = 0; i < N; i++)

typedef pair<int, int> Pi;
#define fi first
#define se second


signed main()
{
  int N, M;
  Pi data[10005];
  
  while(cin >> N >> M, N || M) {
    int sum = 0;

    Rep(i, N) {
      cin >> data[i].se >> data[i].fi;
    }
  
    sort(data, data + N, greater<Pi>());
  
    Rep(i, N) {
      int val = min(M, data[i].se);

      data[i].se -= val; M -= val;
    
      sum += data[i].se * data[i].fi;
    }
  
    cout << sum << endl;
  }
  return 0;
}
  