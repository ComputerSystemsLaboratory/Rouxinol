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

int A[110], N;

int main(int argc, char *argv[])
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> N;
  REP(i,N) cin >> A[i];
  REP(i,N) {
    int key = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > key) {
      A[j+1] = A[j];
      --j;
    }
    A[j+1] = key;
    REP(j,N) {
      cout << A[j];
      if (j < N-1) {
        cout << " ";
      } else {
        cout << endl;
      }
    }
  } 
    
  return 0;
}