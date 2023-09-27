#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define P pair<int, int>
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
#define DEBUG
const int N = 60 * 60 * 24 + 100;

int convert(string s){
  return (atoi(s.substr(0, 2).c_str()) * 60 * 60) + (atoi(s.substr(3, 2).c_str()) * 60) + atoi(s.substr(6, 2).c_str());
}

int main() {
  int n;
  while(cin >>n && n){
    vector<int> v(N, 0);
    REP(i, n){
      string s, e; cin >>s >>e;
      v[convert(s)] += 1;
      v[convert(e)] -= 1;
    }
    int ans = v[0];
    FOR(i, 1, N){
      v[i] += v[i - 1];
      ans = max(ans, v[i]);
    }
    cout <<ans <<endl;
  }
  return 0;
}