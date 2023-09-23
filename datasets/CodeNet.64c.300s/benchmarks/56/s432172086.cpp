#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;

signed main()
{
  int N;
  int A, B, C;

  cin >> N;
  Rep(i, N) {
    
    int cnt = 0;
    cin >> A >> B >> C;

    while(A < 1000) {
      while(B <= 10) {
	while(C < ((B % 2 || !(A % 3)) ? 20 : 19)) cnt++, C++;
	C = 0, B++; 
      }
      B = 1;
      A++;
    }

    cout << cnt + 1 << endl;
  }

  return 0;
}
	