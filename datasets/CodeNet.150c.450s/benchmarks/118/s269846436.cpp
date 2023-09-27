#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, san = 200, defa = 195;
	cin >> n;
	for(int q = 0; q < n; ++q){
		int ans = 0, y, m, d;
		cin >> y >> m >> d;
		if(y % 3){
			if(m % 2){
				ans += (20 - d);
			}
			else{
				ans += (19 - d);
			}
			m++;
			if(m != 11){
				if(m % 2){
					ans += ((10 - m) / 2 + 1) * 19 + ((10 - m) / 2 + 1) * 20;
				}
				else{
					ans += ((10 - m) / 2 + 1) * 19 + (10 - m) / 2 * 20;
				}
			}
				
		}
		else{
			ans += (20 - d);
			m++;
			if(m != 11){
				ans += (10 - m + 1) * 20;
			}
		}
		y++;
		if(y == 1000){
			cout << ans + 1 << endl;
			continue;
		}
		while(y % 3){
			ans += defa;
			y++;
		}
		ans += ((1000 - y) / 3 + 1) * san;
		ans += ((1000 - y - 1) - ((1000 - y) / 3)) * defa;
		cout << ans + 1 << endl;
	}
	return 0;
}