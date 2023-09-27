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

int n, k;
vector<int> w;


bool ok(int p){
  int i = 0;
  int t = 0;
  while(i < n && t < k){
    int s = 0;
    while(i < n){
      if(s + w[i] <= p){
        s += w[i++];
      } else {
        break;
      }
    }
    t++;
  }
  return i==n;
}

int main(int argc, char *argv[]){
  cin >> n >> k;
  w.resize(n);
  for (size_t i = 0; i < n; i++) {
    cin >> w[i];
  }
  int l = 0, r = 10000;
  while(!ok(r)){
    r *= 2;
  }
  while(l != r-1){
    int c = (l+r) / 2;
    if(ok(c)){
      r = c;
    } else{
      l = c;
    }
  }
  cout << r << endl;
  
  return 0;
}