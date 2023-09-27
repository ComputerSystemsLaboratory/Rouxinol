#include <iostream>
using namespace std;

// 日付クラス.
struct Date{
	int y, m, d;
	// コンストラクタで初期化
	Date(int y_, int m_, int d_){
		y = y_;
		m = m_;
		d = d_;
	}
	// 日付を1日進める. 1日進めて 1000年1月1日になるときだけ false を返す.
	bool inc(){
		if( m % 2 == 1 || y%3 == 0 ){ // 1ヶ月が20日あるとき
			if( d == 20 ){
				d = 1;
				if( m == 10 ){
					y++;
					m = 1;
				}else{
					m++;
				}
			}else{
				d++;
			}
		}else{ // 1ヶ月が19日あるとき
			if( d == 19 ){
				d = 1;
				if( m == 10 ){
					y++;
					m = 1;
				}else{
					m++;
				}
			}else{
				d++;
			}
		}
		return !( y == 1000 && m == 1 && d == 1 );
	}
};

int main(){
	int n;
	cin >> n;
	for(int i=0 ; i < n ; i++ ){
		int y , m , d;
		cin >> y >> m >> d;
		
		Date t(y,m,d);
		int ans = 1;
		while( t.inc() ) ans++;
		
		cout << ans << endl;
	}
}