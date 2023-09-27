/*! if g++ -g alds_1_5_d.cpp -o alds_1_5_d.out; then ./alds_1_5_d.out < alds_1_5_d.test; fi
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

vector<int> a, b;
ull cross=0;

void print(){
  int n = a.size();
  for (size_t i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void sort(int l, int r){
  int c = (l+r)/2;
  if(r > l + 1){
    sort(l, c);
    sort(c, r);
  }
  int li = l, ri = c, bi = l;
  while(li < c && ri < r){
    if(a[li] <= a[ri]){
      b[bi++] = a[li++];
    } else{
      b[bi++] = a[ri++];
      cross += c-li;
    }
  }
  while(li < c)b[bi++] = a[li++];
  while(ri < r)b[bi++] = a[ri++];
  for (int i = l; i < r; i++) {
    a[i] = b[i];
  }
}

int main(int argc, char *argv[]){
  size_t n;
  cin >> n;
  a.resize(n);
  b.resize(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(0, n);
  cout << cross << endl;
  // for (size_t i = 0; i < n-1; i++) {
  //   cout << a[i] << " ";
  // }
  // cout << a.back() << endl;
  return 0;
}