#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int m, min, max, su, gap, temp;
  vector<int> p;

  while(1) {
    cin >> m >> min >> max;
    if(m == 0 && min == 0 && max == 0)
      break;

    for(int i = 0; i < m; i++) {
      int P;
      cin >> P;
      p.push_back(P);
    }

    // sort(p.begin(), p.end(), greater<int>());                               

    su = p[min-1]-p[min];
    gap = min;
    for(int i = min-1; i < max; i++) {
      temp  = p[i] - p[i+1];
      //cout << temp << ' ' << gap << endl;                                    
      if(temp >= su) {
        su = temp;
        gap = i+1;
      }
    }
    cout << gap << endl;
    p.clear();
  }

  return 0;
}
