//誤差注意。あと、2つの値段の和が、5%で105円だからって、0%で100円とは限らない！！
#include<iostream>
using namespace std;

int x,y,s;

int main(){
	int i,j,ans;
	
	while( 1 ){
		cin >> x >> y >> s;
		if( !x )break;
		
		ans = 0;
		for( i = 1; i < 2000; i++ ){
			for( j = 1; j < 2000; j++ ){
				//税抜きi円とj円の品物
				int tmp = i*(100+x)/100 + j*(100+x)/100;
				//cout << tmp << endl;
				if( tmp != s )
					continue;
				ans = max( ans, i*(100+y)/100 + j*(100+y)/100 ) ;
			}
		}
		cout << ans << endl;
	}
	return 0;
}