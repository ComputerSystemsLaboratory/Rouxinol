#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;


signed main()
{
  int N;
  string S;
  set<string> st;
  
  cin >> N;

  Rep(i, N) {
    cin >> S;
    st.insert(S);
  }

  bool state = false;
  int M;
  cin >> M;
  while(M--) {
    cin >> S;
    if(st.find(S) != st.end()) {
      if(state) { cout << "Closed by "; state = false; }
      else { cout << "Opened by "; state = true; }
      cout << S << endl;
    } else {
      cout << "Unknown " << S << endl;
    }
  }

  return 0;
}
	  