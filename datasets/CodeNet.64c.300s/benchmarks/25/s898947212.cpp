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

int a[4];
int b[4];
bool used[2][4];

int main()
{
  while(cin >> a[0]){
    rep(i, 3) cin >> a[i+1];
    rep(i, 4) cin >> b[i];

    int hit = 0;
    int blow = 0;
    rep(i, 4) used[0][i] = used[1][i] = false;
    rep(i, 4) if(a[i] == b[i]) hit += 1,  used[0][i] = used[1][i] = true;
    rep(i, 4) rep(j, 4) if(a[i] == b[j] && !used[0][i] && !used[1][j]) blow += 1;

    cout << hit << " " << blow << endl;
  }

  return 0;
}