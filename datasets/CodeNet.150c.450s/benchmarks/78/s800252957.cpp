#include <cstring>
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <complex>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <bitset>

#define rep(i,a) for(int i = 0;i < (a); i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)
#define repd(i,a,b) for(int i = (a); i >= (b); i--)
#define repit(i,a) for(__typeof((a).begin()) i = (a).begin(); i != (a).end(); i++)
#define all(u) (u).begin(),(u).end()
#define rall(u) (u).rbegin(),(u).rend()
#define UNIQUE(u) (u).erase(unique(all(u)),(u).end())
#define pb push_back
#define mp make_pair
#define INF 1e10
#define EPS 1e-10
#define PI acos(-1.0)

using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int N = 1000000;

int a[N], b[N];

void gen() {
  memset(a, 37, sizeof(a));
  memset(b, 37, sizeof(b));
  a[0] = b[0] = 0;

  for (int i = 1, d = 1; d < N; ++i, d += i * (i + 1) / 2) {
    for (int j = d; j < N; ++j) {
      a[j] = min(a[j], a[j - d] + 1);
      if (d & 1)
	b[j] = min(b[j], b[j - d] + 1);
    }
  }
}

int main() {
  gen();

  int n;
  while (cin >> n && n)
    cout << a[n] << ' ' << b[n] << endl;

  return 0;
}