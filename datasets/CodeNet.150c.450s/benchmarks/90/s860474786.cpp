#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <functional>
#include <queue>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
  map<int, int> fs;
  int x;
  while (scanf("%d", &x) == 1)
    fs[x]++;
  int c = 0;
  vector<int> rs;
  for (map<int, int>::iterator it = fs.begin(); it != fs.end(); ++it) {
    if (it->second == c)
      rs.push_back(it->first);
    if (it->second > c) {
      rs.clear();
      rs.push_back(it->first);
      c = it->second;
    }
  }
  for (int i = 0; i < rs.size(); i++)
    printf("%d\n", rs[i]);
  return 0;
}