#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, r;
  while(cin >> n >> r, n || r){
    int deck[50];
    for(int i = 0; i < n; i++) deck[i] = n - i;
    while(r--){
      int p, c;
      cin >> p >> c;
      --p;
      int tmp[50];
      for(int i = 0; i < c; i++) tmp[i] = deck[p + i];
      for(int i = p + c - 1; i >= c; i--) deck[i] = deck[i - c];
      for(int i = 0; i < c; i++) deck[i] = tmp[i];
    }
    cout << deck[0] << endl;
  }
  return 0;
}