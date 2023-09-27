#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s,e) for((i)=(s);(i)<(int)(e);(i)++)
#define REP(i,e) FOR(i,0,e)

#define all(o) (o).begin(), (o).end()
#define psb(x) push_back(x)
#define mp(x,y) make_pair((x),(y))

typedef long long ll;
typedef pair<int, int> PII;

const double EPS = 1e-10;

int n;

int main() {
  map<string, bool> d;
  string q, s;
  scanf("%d ", &n);
  for (int i=0; i<n; i++) {
    char qq[7], ss[13];
    scanf("%s%s ", qq, ss);
    q = qq; s = ss; 
//    cin >> q >> s;  //cin?????£???TLE
    if (q == "insert")
      d[s] = true;
    else if (q == "find") {
      puts((d.count(s)) ? "yes" : "no");
/*      if (d.count(s))
        printf("yes\n");
      else
        printf("no\n");
*/
    }
  }

  return 0;
}