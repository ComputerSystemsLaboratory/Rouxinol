#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int num_problems;
  cin >> num_problems;

  int edges[3];
  for (int i = 0; i < num_problems; ++i) {
    cin >> edges[0] >> edges[1] >> edges[2];
    sort(edges, edges + 3);
    cout <<
        (edges[0] * edges[0] + edges[1] * edges[1] == edges[2] * edges[2] ?
         "YES" : "NO") <<
        endl;
  }

  return 0;
}