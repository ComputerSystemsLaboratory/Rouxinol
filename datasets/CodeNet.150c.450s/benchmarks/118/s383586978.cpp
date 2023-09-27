#include <iostream>
using namespace std;

bool is_millennium(int y, int m, int d){
	return (y == 1000 && m == 1 && d == 1);
}

int main(){
	int n;
	cin >> n;
	for(int i=0 ; i < n ; i++ ){
		int y, m, d, ans=0;
		cin >> y >> m >> d;
		
		while( !is_millennium(y,m,d) ){
			ans++;
			if( y % 3 == 0 ){
				if( d == 20 ){
					d = 1;
					if( m == 10 ){
						m = 1;
						y++;
					}else{
						m++;
					}
				}else{
					d++;
				}
			}else{
				if( m % 2 ){
					if( d == 20 ){
						d = 1;
						if( m == 10 ){
							m = 1;
							y++;
						}else{
							m++;
						}
					}else{
						d++;
					}
				}else{
					if( d == 19 ){
						d = 1;
						if( m == 10 ){
							m = 1;
							y++;
						}else{
							m++;
						}
					}else{
						d++;
					}
				}
			}
		}
		cout << ans << endl;
	}
}