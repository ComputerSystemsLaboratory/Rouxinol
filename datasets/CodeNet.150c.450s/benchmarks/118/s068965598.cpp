#include <iostream>

#define REP(i,n) for(int i = 0; i < n ; ++i)
#define LL long long 
using namespace std;

int n;

int main()
{
	cin >> n;
	REP(i, n){
		LL ans = 0;
		LL y, m, d;
		cin >> y >> m >> d;
		for (int i = y+1; i < 1000; i++)
		{
			if (!(i % 3)){
				ans += 5 * 40;
			}
			else{
				ans += 5 * 39;
			}
		}
		for (int i = m + 1; i < 11; i++)
		{
			if (!(i % 2)){
				ans += 19 + (!(y%3));
			}
			else{
				ans += 20;
			}
		}
		ans += 19 + (!(y % 3) || (m % 2)) - d;

		cout << ans + 1 << endl;
	}
}