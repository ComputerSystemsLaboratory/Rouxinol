#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for(int (i)=(a);(i)<(int)(n);(i)++)
#define foreach(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define SZ(x) ((int) (x).size())
typedef long long ll;

int main(){
	int n, a;
	cin >> n >> a;
	int minv = a, maxv = INT_MIN;
	rep(i,1,n) {
		cin >> a;
		maxv = max(maxv, a - minv);
		minv = min(minv, a);
	}
	cout << maxv <<endl;
	return 0;
}