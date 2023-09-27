#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;

string pat[9] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs" , "tuv" , "wxyz"};

signed main()
{
  int N;
  
  cin >> N;
  while(N--) {
    string S, T;
    cin >> S;
    
    int i = 0;
    while(i < S.size()) {
      int cnt = -1, choice = -1;
      while(i < S.size() && S[i] != '0') {
	cnt++; choice = S[i] - '1'; i++;
      }
      if(~choice) {
	T += pat[choice][cnt % pat[choice].size()];
      }
      i++;
    }

    cout << T << endl;
  }

  return 0;
}