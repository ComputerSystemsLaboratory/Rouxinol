#include <bits/stdc++.h>
using namespace std;

int N;
char m;

void solve(){
  int M;
  map<char, char> changer;

  char f, t;
  for (int i = 0; i < N; i++){
    cin >> f;
    cin >> t;
    changer[f] = t;
  }
  cin >> M;
  for (int i = 0; i < M; i++){
    cin >> m;
    if (changer.find(m) != changer.end()) cout << changer[m];
    else cout << m;
  }
  printf("\n");
}

int main(){
  while (cin >> N, N) solve();
  return 0;
}