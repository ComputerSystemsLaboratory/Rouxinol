#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstdio>
#include <numeric>
#include <bitset>
#include <stack>
#include <cstring>
using namespace std;

const int INF = 1 << 30;
const double EPS = 1e-10;

int main()
{
  int N;
  while (cin >> N) {
    set<string> U;
    for (int i = 0; i < N; ++i) {
      string s;
      cin >> s;
      U.insert(s);
    }

    int M;
    cin >> M;
    bool open = false;
    for (int i = 0; i < M; ++i) {
      string T;
      cin >> T;
      
      if (U.find(T) == U.end()) {
        cout << "Unknown " << T << endl;
      } else {
        if (open) {
          cout << "Closed by ";
          open = false;
        } else {
          cout << "Opened by ";
          open = true;
        }
        cout << T << endl;
      }
    }


  }
  return 0;
}