#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cassert>
#include <cstring>
#include <string>
#include <vector>
#include <random>
#include <bitset>
#include <queue>
#include <cmath>
#include <unordered_map>
#include <set>
#include <map>
#define INCANT cin.tie(0), cout.tie(0), ios::sync_with_stdio(0), cout << fixed << setprecision(20);
#define rep(i,n) for (int i=0; i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
#define PI 3.14159265358979
typedef long long ll;
using namespace std;
const ll MOD = 1e9+7LL;
const int INF = 2e9;
int N;
int a[10004][3]; // 全て同じ, 二つ同じ, 全て違う

int main() {
  INCANT;
  cin >> N;
  // x<= y <= zと仮定
  for (int x=1; 6*x*x<=N; x++) {
    for (int y=x; 3*y*y<=N; y++) {
      for (int z=y; z*z<=N; z++) {
        int sum=x*x+y*y+z*z+x*y+x*z+z*y;
        if (sum<=N) {
          if (x==y && y==z) a[sum][0]++;
          else if (x!=y && y!=z && z !=x) a[sum][2]++;
          else a[sum][1]++;
        }
      }
    }
  }
  rep(i, N) {
    cout << a[i+1][0] + 3*a[i+1][1] + 6*a[i+1][2] << endl;
  }

  return 0;
}