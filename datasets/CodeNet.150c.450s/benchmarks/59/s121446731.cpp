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
  for (size_t k = 0; k < n-1; k++) {
    cout << v[k] << " ";
  }
  cout << v[n-1] << endl;
  for (size_t i = 1; i < n; i++) {
    int j = i-1;
    while(j >= 0 && v[j] > v[j+1]){
      int x = v[j];
      v[j] = v[j+1];
      v[j+1] = x;
      j--;
    }
    for (size_t k = 0; k < n-1; k++) {
      cout << v[k] << " ";
    }
    cout << v[n-1] << endl;
  }


  
  return 0;
}