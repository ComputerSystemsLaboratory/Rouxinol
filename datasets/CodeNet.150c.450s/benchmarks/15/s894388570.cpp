#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {
  int S[10000];
  int T[500];
  int n, m;

  cin >> m;
  for(int i = 0; i < m; i++) {
    cin >> S[i];
  }
  sort(S, S + m);
  
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> T[i];
  }
  sort(T, T + n);

  int ans = 0;
  for(int i = 0; i < n; i++) {
    if( binary_search(S, S + m, T[i]) ) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}