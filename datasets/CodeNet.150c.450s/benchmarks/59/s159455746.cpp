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
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
typedef complex<double> P;

void display(vector<int> &v){
  cout <<v[0];
  FOR(i, 1, v.size()) cout <<" " <<v[i];
  cout <<endl;
}

void insertionSort(vector<int> &v, int &idx){
  int num = v[idx], i = idx - 1;
  while(i >= 0 && v[i] > num) { v[i + 1] = v[i]; i--; }
  v[i + 1] = num;
  display(v);
}
 
int main() {
  int N; cin >>N;
  vector<int> v(N);
  REP(i, N) cin >>v[i];
  display(v);
  for(int i = 1; i < N; ++i) insertionSort(v, i);
  return 0;
}