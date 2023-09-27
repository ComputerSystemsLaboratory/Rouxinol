#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

template<class T> inline T sqr(T x) {return x*x;}

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

#define CLR(a) memset((a), 0 ,sizeof(a))

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int n;
void unite(int *id, int x, int y){
  int set_id;
  set_id = id[y];
  for(int i=0;i<n;i++){
    if(id[i] == set_id) id[i] = id[x];
  }
  return;
}

bool same(int *id, int x, int y){
  if(id[x] == id[y]) return true;
  else return false;
}

int main(void){
  int q, x, y, com;
  cin >> n >> q;
  int id[n];

  for(int i=0;i<n;i++) id[i] = i;

  for(int i=0;i<q;i++){
    cin >> com >> x >> y;
    if(com == 0) unite(id, x, y);
    else if(com == 1){
      if(same(id, x, y)) cout << "1" << endl;
      else cout << "0" << endl;
    }
  }

    return 0;
}