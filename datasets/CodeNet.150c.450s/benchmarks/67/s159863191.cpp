#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector<T> >;

int main() {
  vi results;
  vi triangular{0};
  for (int i = 1 ; triangular[i-1] <= 1000 ; i++) {
    triangular.push_back(triangular[i-1] + i);
  }

  while(true) {
    int n;
    cin >> n;
    if (n==0) { break; }
    int pattern = 0;
    int max_number = distance(triangular.begin(), upper_bound(triangular.begin(), triangular.end(), n)) - 1;

    for (int number = 2 ; number <= max_number ; number++) {
      if (number % 2 == 1 && n % number == 0 && n/number - number/2 > 0) {
        pattern += 1;
        continue;
      }
      if ((number % 2) == 0 && n%number == number/2 && n/number - number/2 >= 0) {
        pattern += 1;
      }
    }
    results.push_back(pattern);
  }

  for (int i = 0 ; i < results.size() ; i++) {
    printf("%d\n", results[i]);
  }

  return 0;
}