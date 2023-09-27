#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(void) {

  while (true) {
    int m, min, max;
    cin >> m >> min >> max;
    if (m == 0 && min == 0 && max == 0) break;

    int p[m];
    for (int i = 0; i < m; i++)
      cin >> p[i];
    vector<pair<int,int> > g;

    for (int i = min; i <= max; i++) {
      pair<int,int> tmp = make_pair(i,p[i-1]-p[i]);
      //cout << tmp.first << " " << tmp.second << endl;
      
      g.push_back(tmp);
    }

    int gmax = -1;
    int n;
    for (int i = 0; i < g.size(); i++) {
      pair<int,int> tmp = g[i];
      if (gmax <= tmp.second) {
	n = tmp.first;
	gmax = tmp.second;
      }
    }
    cout << n << endl;
    
  }

  return 0;
  
}