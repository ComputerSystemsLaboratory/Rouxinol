#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;

int A, B, C;

int check(int val) {
  Reps(i, 1, A * 10 + 1) {
    int v = 100 * i / A + i;
    if(100 * i % A) v++;
    if(val == v - 1) return -1;
    if(val < v) return i - 1;
  }
}

signed main()
{  

  while(cin >> A >> B >> C, A || B || C) {
    int maxv = -LLINF;
    Reps(i, 1, C) {
      
      int a = check(i), b = check(C - i);
      if(!~a || !~b) continue;
      a = i - a, b = C - i - b;
      //cout << a << " " << b << " " << i << " " << C - i << endl;
      maxv = max(a * (100 + B) / 100 + b * (100 + B) / 100, maxv);
      //cout << maxv << endl;
    }
    cout << maxv << endl;
  }

  return 0;
}