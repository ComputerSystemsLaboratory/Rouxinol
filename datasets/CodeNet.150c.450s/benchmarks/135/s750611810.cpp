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

int N, M;
int h[2001], w[2001];
int sum_h[2001], sum_w[2001];
int avail_h[2000000], avail_w[2000000];

signed main()
{
  while( cin >> N >> M, N | M ) {
    sum_h[0] = 0;
    Rep(i, N) {
      cin >> h[i];
      if ( i == 0 ) sum_h[i+1] = h[i];
      else sum_h[i+1] = sum_h[i] + h[i];
    }
    sum_w[0] = 0;
    Rep(i, M) {
      cin >> w[i];
      if ( i == 0 ) sum_w[i+1] = w[i];
      else sum_w[i+1] = sum_w[i] + w[i];
    }

    Rep(i, 2000001) avail_h[i] = avail_w[i] = 0;

    for ( int i = 0; i < N; i++ ) {
      for ( int j = i+1; j < N+1; j++ ) {
	avail_h[sum_h[j] - sum_h[i]]++;
      }
    }

    for ( int i = 0; i < M; i++ ) {
      for ( int j = i+1; j < M+1; j++ ) {
	avail_w[sum_w[j] - sum_w[i]]++;
      }
    }

    int ans = 0;
    //Rep(i, 20) cout << avail_h[i] << " " << avail_w[i] << endl;
    Rep(i, 2000000) ans += avail_h[i] * avail_w[i];

    cout << ans << endl;
  }
  return 0;
}