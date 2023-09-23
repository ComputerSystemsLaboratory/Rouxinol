
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define month_max 10
#define day_s 19
#define day_l 20

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {

		//誕生日を取得する
		int y, m, d, ans = 0;
		cin >> y >> m >> d;
		//端数から計算していく
		while(y < 1000) {
			//日の処理
			//来月頭まで進める
			if(d != -1) {

				if( ( y % 3 != 0 ) && ( m % 2 == 0 ) ) {
					ans += day_s - d + 1;
					ans ++;
					if( m == 10 ) ans --;
				} else { 
					ans += day_l - d + 1;
				}
				
				d = -1;
				m ++;
				if( m > 10 ) {
					y ++;
					m = 1;
				}

			} else {

				//月の処理
				//来年頭まで進める
				if( m != 1 ) {

					if( y % 3 != 0) {
						int restm = (month_max + 1 - m);	//残り月数
						int sm = (restm / 2 + 1);			//小の月の残り
						int lm = restm - sm;				//大の月の残り
						ans += ( sm * day_s + lm * day_l );
					} else {
						int restm = (month_max + 1 - m);
						ans += ( restm * day_l );
					}
					m = 1;
					y ++;

				} else {
					if( y % 3 != 0 ) {
						ans += (day_s + day_l) * (month_max / 2);
					} else {
						ans += day_l * month_max;
					}
					y ++;
				}

			}
		}

		cout << ans << endl;

	}
	

	//while(1){}
	return 0;
}