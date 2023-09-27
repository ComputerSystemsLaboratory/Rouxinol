/*
NOTE :
*min_element(.begin(),.end())
*max_element(.begin(),.end())
stack push pop top
queue push pop front
priority_queue<> pq
 push()  pop() size()  top()
map<>
 find() begin() end() insert(map<>::value_type())
pair<>
sort(.begin(), .end())
sort(arr, arr+N)
sort(a, a+N, greater<int>())
binary_search(vc.begin(), vc.end(), x)  //binary_search???true, false?????????
vector<int>::iterator lit = lower_bound(vc.begin(), vc.end(), x);
  lower_bound?????????????????????"??\???"????????????????????????????????????????????¬???????????????
vector<int>::iterator uit = upper_bound(vc.begin(), vc.end(), x);
  upper_bound????????????????????????"?¶???????"?????????????????????????????????????????¬???????????????
*/
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

#define MAX 100
#define INF 1<<20
#define LLINF 10e12 // 1<<31 // 2^31
#define REP(i,n) for(int i=0;i<n;i++)
#define REP2(i,a,n) for(int i=(a);i<(n);i++)
#define SET(a,c) memset(a,c,sizeof a)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define FOREACH(i,c) for(auto (i) : (c))
#define BIT(i,j) ((i)>>(j))&1
#define ALL(o) (o).begin(), (o).end()
#define ERASE(o) (o).erase(unique(ALL((o))), (o).end());

using namespace std;
typedef long long ll;
typedef valarray<int> array_t;
/////

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  // FROM HERE
  vector<int> a(5);
  REP(i,5) cin >> a[i];
  sort(ALL(a),greater<int>());
  REP(i,5) printf("%d%s",a[i],(i==4)?"\n":" ");
  return 0;
}