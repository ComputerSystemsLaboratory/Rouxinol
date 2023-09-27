#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
  for(;;) {
    int m, nm, nx;
    cin >> m >> nm >> nx;
    if(m == 0) break;
    vector<int> cs;
    for(int i = 0; i < m; i++) {
      int p;
      cin >> p;
      cs.push_back(p);
    }
    int dx = 0;
    int nn = nm;
    for(int i = nm - 1; i < nx; i++) {
      int d = cs[i] - cs[i+1];
      if(d >= dx) {
        dx = d;
        nn = i + 1;
      }
    }
    cout << nn << endl;
  }
  return 0;
}