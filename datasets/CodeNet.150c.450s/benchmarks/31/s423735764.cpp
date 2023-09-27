#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define INF 999999999
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int main()
{
	int n,maxv,minv;
	cin >> n;
	int R[n];
	REP(i,n) cin >> R[i];
	maxv = R[1] - R[0];
	minv = R[0];

	FOR(i,1,n) {
		maxv = max(maxv, (R[i]-minv));
		minv = min(minv, R[i]);
	}
	cout << maxv << endl;
	return 0;
}

