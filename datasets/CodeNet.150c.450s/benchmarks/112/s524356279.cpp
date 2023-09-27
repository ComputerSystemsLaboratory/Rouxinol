#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  string str;
  char c[256], t;
  while (cin >> n, n){
    str = "";
    for (int i = 0; i < 256; i++) c[i] = i;
    for (int i = 0; i < n; i++){
      cin >> t;
      cin >> c[t];
    }
    cin >> m;
    for (int i = 0; i < m; i++){
      cin >> t;
      str += c[t];
    }
    cout << str << endl;
  }
}