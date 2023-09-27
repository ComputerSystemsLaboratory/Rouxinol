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

  bool flag = true;
  int ret = 0;
  while(flag){
    flag = false;
    for (size_t i = n-1; i > 0; i--) {
      if(v[i] < v[i-1]){
        ret++;
        int x = v[i];
        v[i] = v[i-1];
        v[i-1] = x;
        flag = true;
      }
    }
  }

  for (size_t i = 0; i < n-1; i++) {
    cout << v[i] << " ";
  }
  cout << v[n-1] << endl;
  cout << ret << endl;


  
  return 0;
}