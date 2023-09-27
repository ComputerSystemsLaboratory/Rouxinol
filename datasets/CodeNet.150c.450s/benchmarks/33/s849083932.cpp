#include <iostream>
using namespace std;


int calc(int x,int r){
	return x * (r+100) / 100;
}
int main(){
	int x,y,s;
	while(cin >> x >> y >> s && x){
		int ans = 0;
		for(int i = 1 ; i <= s-1 ; i++){
			for(int j = 1 ; j <= s-1 ; j++){
				int sum = calc(i,x) + calc(j,x);
				if( s == sum ){
					ans = max(ans,calc(i,y)+calc(j,y));
				}
			}
		}
		cout << ans << endl;
	}
}