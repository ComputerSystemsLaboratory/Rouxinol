#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <climits>
#include <cmath>
#include <cstring>
#include <cassert>
#include <chrono>
#include <random>
#include <bitset>
#include <unordered_set>
#include <unordered_map>
using namespace std;

#define pb push_back
#define fst first
#define snd second

using ll = long long;
using pii = pair<int,int>;
template<typename T> using min_queue=priority_queue<T,vector<T>,greater<T>>;


int N;
ll a[222];
ll z[66];
string s;

inline int get(ll a, int j) {
  return (a>>j)&1;
}

bool add(ll n) {
  for (int i=0;i<60;i++) {
    if (!get(n,i)) continue;
    if (!get(z[i], i)) {
      z[i] = n;
      return 1;
    }
    n ^= z[i];
  }
  return 0;
}


int main(){
  ios::sync_with_stdio(0);cin.tie(0);

  bitset<200> bs;

  int T;cin>>T;
  while (T --> 0) {
    cin>>N;
    for (int i=0;i<N;i++) cin>>a[i];
    cin>>s;
    memset(z,0,sizeof z);

    int winner = 0;
    for (int i=N-1;i>=0;i--) {
      if (add(a[i]) && s[i]=='1') {
        winner = 1;
        break;
      }
    }
    cout << winner << '\n';
  }

  return 0;
}
