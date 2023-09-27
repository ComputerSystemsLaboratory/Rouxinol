#include <bits/stdc++.h>
using namespace std;

signed main()
{
  string w, t;
  int cnt = 0;
  int i;
  cin >> w;

  transform(w.begin(), w.end(), w.begin(), ::toupper);
  while(1){
    cin >> t;
    if (t == "END_OF_TEXT"){
      break;
    }
    transform(t.begin(), t.end(), t.begin(), ::toupper);
    if (w == t){
      cnt++;
    }
  }
  
  cout << cnt << endl;

  return (0);
}