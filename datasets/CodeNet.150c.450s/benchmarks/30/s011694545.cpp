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
  vector<int> v(n);
  for (size_t i = 0; i < n; i++) {
    cin >> v[i];
  }

  int ret = 0;
  for (size_t i = 0; i < n; i++) {
    size_t minj = i;
    for (size_t j = i; j < n; j++) {
      if(v[j] < v[minj]){
        minj = j;
      }
    }
    if(minj != i){
      ret++;
      int x = v[i];
      v[i] = v[minj];
      v[minj] = x;
    }
  }
  for (size_t i = 0; i < n-1; i++) {
    cout << v[i] << " ";
  }
  cout << v[n-1] << endl;
  cout << ret << endl;




  
  return 0;
}