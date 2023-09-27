#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T1, class T2> inline void minup(T1& m, T2 x){ if(m>x) m=static_cast<T2>(x); }
template<class T1, class T2> inline void maxup(T1& m, T2 x){ if(m<x) m=static_cast<T2>(x); }

#define INF 1000000000
#define MOD 1000000009
#define EPS 1E-9

int n;
int a, b;

int main()
{
  while((cin >> n) && n){
    int res[2] = {0};
    while(n--){
      cin >> a >> b;

      if(a >  b){ res[0] += a + b;  continue; }
      if(a <  b){ res[1] += a + b;  continue; }
      res[0] += a;
      res[1] += b;
    }

    cout << res[0] << " " << res[1] << endl;
  }

  return 0;
}