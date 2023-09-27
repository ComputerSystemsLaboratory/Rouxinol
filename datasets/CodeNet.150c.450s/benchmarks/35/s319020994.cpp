#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>

using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n) 

int main(void){  
  int n;
  while(cin>>n,n){
    int maxs;
    int a[5001] = {0};
    REP(i,n) cin >> a[i];
    maxs = a[0];
    FOR(i,0,n){
      int sum =0;
      FOR(j,i,n){
        sum += a[j];
        maxs = max(sum, maxs);
      }
    }
    cout << maxs << endl;
  }
  return 0;
}