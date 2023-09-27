#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;


signed main()
{
  int N, R;

  while(cin >> N >> R, N || R) {
    int p, c;
    
    int num[55];
    Rep(i, N) num[i] = N - i - 1;
    
    while(R--) {
      int temp[55];

      cin >> p >> c; --p;
      
      Rep(i, c) temp[i] = num[i + p];
      for(int i = p - 1; i >= 0; i--) num[c + i] = num[i];
      Rep(i, c) num[i] = temp[i];
    }
    cout << num[0] + 1 << endl;
  }

  return 0;
}