#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
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
  int n, sum=100000;
  int i, j, k;
  int tot, ans, num;

  cin >> n;
  for(i=0; i<n; i++){
    sum *= 1.05;
    if(sum%1000 != 0) sum = (sum/1000+1)*1000;
  }
  cout << sum << endl;
  return 0;
}