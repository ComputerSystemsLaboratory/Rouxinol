#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 
#define pf push_front 
#define mp make_pair
#define fr first
#define sc second
#define Rep(i,n) for(int i=0;i<(n);i++)
#define All(v) v.begin(),v.end()

typedef pair<int, int> Pii; typedef pair<int, Pii> Pip;
const int INF = 1107110711071107;


signed main()
{
  int h, w;
  while ( cin >> h >> w, h | w ) {
    int mi = INF, mi_h = INF;
    for ( int i = 1; i < 150; i++ ) {
      for ( int j = i + 1; j < 151; j++ ) {
	if ( i*i + j*j > h*h + w*w || ( i*i + j*j == h*h + w*w && i > h ) ) {
	  if ( i*i + j*j < mi ) {
	    mi = i*i + j*j;
	    mi_h = i;
	  }
	  if ( i*i + j*j == mi && i < mi_h ) {
	    mi = i*i + j*j;
	    mi_h = i;
	  }
	}
      }
    }

    cout << mi_h << " " << sqrt(mi - (mi_h*mi_h)) << endl;
  }
}