/*! if g++ -g alds_1_6_b.cpp -o alds_1_6_b.out; then ./alds_1_6_b.out < alds_1_6_b.test; fi
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

void swap(int& x, int& y){
  if(&x == &y) return;
  x = x^y;
  y = x^y;
  x = x^y;
}

int partition(vector<int>& a, int p, int r){
  int x = a[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if(a[j] <= x){
      i++;
      swap(a[i], a[j]);
    }
  }
  i++;
  swap(a[i], a[r]);
  return i;
}


int main(int argc, char *argv[]){
  size_t n;
  cin >> n;
  vector<int> v(n);
  for (size_t i = 0; i < n; i++) {
    cin >> v[i];
  }
  int ret = partition(v, 0, v.size()-1);
  vector<string> s(n);
  for (size_t i = 0; i < n; i++) {
    stringstream ss;
    if(i == ret){
      ss << "[";
    }
    ss << v[i];
    if(i == ret){
      ss << "]";
    }
    s[i] = ss.str();
  }
  for (size_t i = 0; i < n-1; i++) {
    cout << s[i] << " ";
  }
  cout << s.back() << endl;


  return 0;
}