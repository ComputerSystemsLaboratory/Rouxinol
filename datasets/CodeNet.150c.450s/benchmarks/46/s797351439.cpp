#include <iostream>
using namespace std;
int main(){
	int n, x, ans, i, j;
	while(1){
		cin >> n >> x;
		if(n == 0 && x == 0){
			break;
		}else{
			ans = 0;
			for(i = 2; i <= n; i++){
				for(j = 1; j < i; j++){
					if(x-i-j > 0 && x-i-j <= n && x-j-i != i && x-j-i != j){
						ans += 1;
					}else if(i+j >= x){
						break;
					}
				}
			}
			cout << ans/3 << endl;
		}
	}
	return 0;
}