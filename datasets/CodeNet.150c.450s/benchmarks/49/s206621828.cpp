#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector<T> >;

int main() {
  vi results;

  while (true) {
    int count;
    cin >> count;
    if (count == 0) { break; }
    vi point(count);
    for (int i = 0 ; i < count ; i++) {
      cin >> point[i];
    }
    int max_point = -1;
    int min_point = 1001;
    int ave = 0;
    for (int i = 0 ; i < point.size() ; i++) {
      ave += point[i];
      if (max_point < point[i]) {
        max_point = point[i];
      }
      if (min_point > point[i]) {
        min_point = point[i];
      }
    }
    ave -= (max_point + min_point);
    ave /= (count-2);
    results.push_back(ave);
  }

  for (int i = 0 ; i < results.size() ; i++) {
    printf("%d\n", results[i]);
  }

  return 0;
}