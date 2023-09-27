#include <iostream>
#include <cstdio>
#include <climits>
#include <cmath>
#include <cassert>
#include <sstream>
#include <algorithm>
#include <valarray>
#include <utility>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>

#define SIZE 300005
#define INF INT_MAX / 3
#define LLINF 10e12 // 1<<31 // 2^31
#define REP(i,n) for(int i=0;i<n;i++)
#define REP2(i,a,n) for(int i=(a);i<=(n);i++)
#define SET(a,c) memset(a,c,sizeof a)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define FOREACH(i,c) for(auto (i) : (c))
#define BIT(i,j) ((i)>>(j))&1
#define ALL(o) (o).begin(), (o).end()
#define ERASE(o) (o).erase(unique(ALL((o))), (o).end());
#define SQ(x) ((x)*(x))

using namespace std;
typedef long long ll;
typedef valarray<int> array_t;

/////

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  // FROM HERE
  int T[8];
  vector<int> a(4);
  vector<int> b(4);
  int i = 0;
  while(cin >> T[i])
  {
    i = (i+1)%8;
    if(i == 0)
    {
      REP(i,4) a[i] = T[i];
      REP(i,4) b[i] = T[i+4];
      int hit = 0, blow = 0;
      REP(i,4) hit += (a[i] == b[i]);
      REP(i,4) blow += (find(ALL(b),a[i])!=b.end());
      cout << hit << " " << blow-hit << endl;
    }
  }

}