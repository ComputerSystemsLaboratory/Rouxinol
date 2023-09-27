#include <iostream>
using namespace std;

int main() {
  while(1){
    int n, m, p;
    cin >> n;
    cin >> m;
    cin >> p;
    int sum = 0;
    int s;
    int win;

    if(n == 0 && m  == 0 && p == 0)
      return 0;

    for(int i = 1; i <= n; i++){
      cin >> s;
      sum += s;
      if(i == m)
        win = s;
    }
    if(win != 0)
      cout << (int)(((100 * sum) * (100 - p) / 100) / win) << "\n";
    else
      cout << 0 << "\n";
  }
}

