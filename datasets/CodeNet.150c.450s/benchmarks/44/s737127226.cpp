#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a(4), b(4);

  while (cin >> a.at(0) >> a.at(1) >> a.at(2) >> a.at(3) >> b.at(0) >> b.at(1) >>
b.at(2) >> b.at(3)) {
    int hit = 0, blow = 0;
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        if (a.at(i) == b.at(j)) {
          if (i == j) {
            hit++;
          } else {
            blow++;
          }
        }
      }
    }
    cout << hit << " " << blow << endl;
  }
}

