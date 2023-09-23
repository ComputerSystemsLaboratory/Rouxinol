#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <utility>
#include <memory>
#include <functional>
#include <deque>
#include <cctype>
#include <numeric>
#include <ctime>
#include <bitset>
#include <cctype>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

//define
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define dump(x)  cerr << #x << " = " << (x) << endl;

#define INF (INT_MAX/3)
#define PI (2*acos(0.0))
#define EPS (1e-8)
#define MOD (1000000007LL)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef vector<int> vint;
typedef vector<vector<int> > vvint;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;

#define vv(t) vector< vector< T > >
#define pb push_back
#define pu push
#define fi first
#define sec second
#define SORT(x) sort((x).begin(),(x).end())
#define EQ(a,b) (abs((a)-(b))<EPS)

int main(void){
  ios_base::sync_with_stdio(0);
  int n;
  while(cin >> n, n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
      int sum = i;
      for(int j = i + 1; j <= n; j++){
        sum += j;
        if(sum == n) cnt++;
        if(sum >= n) break;
      }
    }
    cout << cnt << endl;
  }
  return 0; 
}