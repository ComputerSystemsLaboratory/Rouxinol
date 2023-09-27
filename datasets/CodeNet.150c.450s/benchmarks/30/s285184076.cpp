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

int selectionSort(vector<int> &v){
  int cnt = 0;
  REP(i, v.size()){
    int idx = i;
    FOR(j, i, v.size()) if(v[j] < v[idx]) idx = j;
    swap(v[i], v[idx]);
    if(i != idx) ++cnt;
  }
  display(v);
  return cnt;
}
 
int main() {
  int N; cin >>N;
  vector<int> v(N);
  REP(i, N) cin >>v[i];
  cout <<selectionSort(v) <<endl;
  return 0;
}