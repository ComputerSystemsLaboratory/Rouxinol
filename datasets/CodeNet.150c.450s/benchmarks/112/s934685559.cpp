#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define BW(a,x,b) ((a)<=(x)&&(x)<=(b))
#define ALL(v) (v).begin(), (v).end()
#define LENGTHOF(x) (sizeof(x) / sizeof(*(x)))
#define AFILL(a, b) fill((int*)a, (int*)(a + LENGTHOF(a)), b)
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define INF 1 << 30
#define EPS 1e-10

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

int n, m;

int main(){
  while(scanf("%d", &n) && n){
    map<string, string>convert;
    string a, b;
    rep(i, n){
      cin >> a >> b;
      convert[a] = b;
      //      cout << convert[a] << endl;
    }
    //    printf("map size %d\n", (int)convert.size());
    string res = "";
    scanf("%d", &m);
    rep(i, m){
      cin >> a;
      if(convert.find(a) != convert.end()) a = convert[a];
      res += a;
    }
    cout << res << endl;
  }
  return 0;
}