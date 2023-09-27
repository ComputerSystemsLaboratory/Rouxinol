/*! if g++ -g alds_1_6_a.cpp -o alds_1_6_a.out; then ./alds_1_6_a.out < alds_1_6_a.test; fi
 */

#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>



using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main(int argc, char *argv[]){
  size_t n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> c(10010, 0);
  for (size_t i = 0; i < n; i++) {
    c[a[i]]++;
  }
  for (size_t i = 1; i < c.size(); i++) {
    c[i] += c[i-1];
  }
  vector<int> ret(n);
  for (int i = n-1; i >= 0; i--) {
    ret[c[a[i]]-1] = a[i];
    c[a[i]]--;
  }
  for (size_t i = 0; i < n-1; i++) {
    cout << ret[i] << " ";
  }
  cout << ret[n-1] << endl;


  return 0;
}