// AOJ 1179

#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	while (n--){
		int y, m, d;
		cin >> y >> m >> d;

		int cnt = 0;
		int x;
		while (1){
			if (y == 1000 && m == 1 && d == 1){
				break;
			}
			d++;
			// 3 で割り切れない年 && 小の月
			if (d == 20 && ((y % 3) != 0) && (m % 2) == 0){
				m++;
				d = 1;
			}
			// 3で割り切れる年 || 大の月
			else if (d == 21 && ((y % 3 == 0) || (m % 2 != 0))){
				m++;
				d = 1;
			}
			if (m == 11){
				m = 1;
				y++;
			}
			// cout << y << " " << m << " " << d << endl;
			// cin >> x;
			cnt++;
		}

		cout << cnt << endl;
	}

	return 0;
}