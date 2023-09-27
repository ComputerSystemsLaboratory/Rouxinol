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
int N, Q;
ll B[100005];
ll C[100005];
unordered_map<ll, ll> U;

int main() {
  INCANT;
  cin >> N;
  int a;
  ll sum=0;
  rep(i, N) {
    cin >> a;
    U[a]++;
    sum+=a;
  }
  cin >> Q;
  rep(i, Q) {
    cin >> B[i] >> C[i];
  }
  rep(i, Q) {
    sum+=U[B[i]]*(C[i]-B[i]);
    U[C[i]]+=U[B[i]];
    U[B[i]]=0ll;
    cout << sum << endl;
  }

  return 0;
}