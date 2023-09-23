#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>

#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define INF 1<<30
#define ALEN(ARR) (sizeof(ARR) / sizeof(ARR[0]))
#define MP make_pair
#define mp make_pair
#define pb push_back
#define PB push_back
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define ll long long
#define ull unsigned long long
#define MOD 1000000007

ll gcd(ll a, ll b) {
    if(a < b) swap(a, b);
    while(b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b) {
    if(a == 0 || b == 0) {
        cout << "Error" << endl;
        return 0;
    }

    return (a * b / gcd(a, b));
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout.precision(16);

  ll a, b;
  while(cin >> a >> b) cout << gcd(a, b) << " " << lcm(a, b) << endl;

  return 0;
}