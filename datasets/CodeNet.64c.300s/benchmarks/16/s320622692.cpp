#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for(int (i)=(a);(i)<(int)(n);(i)++)
#define foreach(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define SZ(x) ((int) (x).size())
typedef long long ll;

int main(){
	int n, a, b;
	cin >> n >> a >> b;
	int minv = min(a,b), maxv = b, ans = b - a;
	n-=2;
	while(n--) {
		cin >> a;
		if(a<minv) minv = a, maxv = INT_MIN;
		else if(a>maxv) { 
			maxv = a;
			ans = max(maxv - minv, ans);	
		}
	}
	cout << ans <<endl;
	return 0;
}