#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
//ranker
using namespace std;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int num;
  while(1){
    cin >> num;
    if(num == 0) break;

    int m = 2;
    int cnt = 0;
    double ch;
    while((num-m*(m-1)/2)>0){
      ch = (num-m*(m-1)/2)*1.0/m;
      if(ceil(ch)==floor(ch)) cnt++;
      m++;
    }
    cout << cnt << endl;
  }
  return 0;
}