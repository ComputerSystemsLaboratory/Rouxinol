#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdio>
using namespace std;


int main() {
  vector<int> v, ov;
  for (int i = 1; i*(i+1)*(i+2)/6 < 1000000; i++)
    v.push_back(i*(i+1)*(i+2)/6);

  vector<int> table(1000000, INT_MAX);
  vector<int> otable(1000000, INT_MAX);
  for (int i = 0; i < v.size(); i++) {
    table[v[i]] = 1;
    if (v[i] % 2)
      otable[v[i]] = 1;
  }
  
  for (int i = 1; i < 1000000; i++) {
    for (int j = 0; j < v.size() && v[j] < i; j++) {
      table[i] = min(table[v[j]] + table[i-v[j]], table[i]);
      if (v[j] % 2)
        otable[i] = min(otable[v[j]] + otable[i-v[j]], otable[i]);
    }
    //   cout << i << " " << table[i] << endl;
  }

  int n;
  while (cin >> n && n)
    printf("%d %d\n", table[n], otable[n]);
}