#include <iostream>
#include <algorithm>
#include <utility>
#define llint long long

using namespace std;
typedef pair<llint, llint> P;

llint n, m;
P p[10005];

int main(void)
{
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		llint x, y, ans = 0;
		for(int i = 1; i <= n; i++){
			cin >> x >> y;
			p[i] = P(y, x);
			ans += x * y;
		}
		sort(p+1, p+n+1);
		reverse(p+1, p+n+1);
		
		llint rem = m;
		for(int i = 1; i <= n; i++){
			x = min(rem, p[i].second);
			ans -= p[i].first * x;
			rem -= x;
		}
		cout << ans << endl;
	}
	
	return 0;
}
