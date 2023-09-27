#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long ll;
typedef pair<int, int> ii;

int small[] = {0, 20, 19, 20, 19, 20, 19, 20, 19, 20, 19};
int bigy = 20 * 10;
int smally = (19 + 20) * 5;

int main() {

	int n;
	cin >> n;
	rep(i, n){
		int y, m, d;
		cin >> y >> m >> d;
		
		if(y == 1000){
			cout << 0 << endl;
			continue;
		}
		ll ans = 0;
		ans += (((999 - y) / 3) * (2*smally + bigy));
		if((999 - y) % 3 == 1) ans += bigy;
		if((999 - y) % 3 == 2) ans += bigy + smally;
		REP(j, m + 1, 11) ans += (y % 3 == 0 ? 20 : small[j]);
		ans += (y % 3 == 0 ? 21 - d : small[m] - d + 1);
		cout << ans << endl;
	}

	return 0;
}