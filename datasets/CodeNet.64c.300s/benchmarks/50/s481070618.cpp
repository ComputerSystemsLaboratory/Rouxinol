#include <cstdio>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <numeric>
#include <functional>

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),(a).end()

using namespace std;
typedef long long ll;

int N, A[110], cnt;

int main(int argc, char *argv[])
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin>> N;
  REP(i,N) cin >> A[i];
  bool flag = true;
  while (flag) {
    flag = false;
    RFOR(j,1,N){
      if (A[j] < A[j-1]) {
        swap(A[j], A[j-1]);
        flag = true;
        ++cnt;
      }
    }
  }

  REP(i,N){
    cout << A[i];
    if (i != N-1) {
      cout << " ";
    } else {
      cout << "\n";
    }
  }
  cout << cnt << endl;

  return 0;
}