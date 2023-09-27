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
  int n, r;

  while(cin >> n >> r){
    if(n == 0 && r == 0) return 0;

    else{
    int hana[n];
    REP(i, n) hana[i]=n-i;

    REP(j, r){
      int p, c;
      cin >> p >> c;
      int tmp[c];
      REP(i, c) tmp[i] = hana[p+i-1];
      REP(i, p-1) hana[p-2-i+c] = hana[p-2-i];
      REP(i, c) hana[i] = tmp[i];
    }
    cout << hana[0] << endl;
  }
  }
return 0;
}