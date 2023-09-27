/*! if g++ -g alds_1_4_a.cpp -o alds_1_4_a.out; then ./alds_1_4_a.out < alds_1_4_a.test; fi
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
  int n;
  cin >> n;
  vector<int> s(n);
  for (size_t i = 0; i < n; i++) {
    cin >> s[i];
  }
  int m;
  cin >> m;
  int ret = 0;
  for (size_t i = 0; i < m; i++) {
    int t;
    cin >> t;
    for (size_t j = 0; j < n; j++) {
      if(t == s[j]){
        ret++;
        break;
      }
    }
  }
  cout << ret << endl;



  return 0;
}