#include <iostream>
using namespace std;

int main(){
	int n;
	int Y, M, D;
	int ans;
	cin >> n;
	while (n--){

		ans = 0;
		cin >> Y >> M >> D;
		if (Y % 3 == 0){
			ans = 21 - D;
			ans += 20 * (10 - M);
		}
		else{
			if (M & 1){
				ans = 21 - D;
				ans += ((10-M) / 2) * 20 + ((10-M) / 2) * 19 + 19;
			}
			else{
				ans = 20 - D;
				ans += ((10-M)/2) * 20 + ((10-M) / 2) * 19;
			}
		}
		for (int i = Y + 1; i < 1000; ++i){
			if (i % 3 == 0){
				ans += 200;
			}
			else{
				ans += 195;
			}
		}
			cout << ans << endl;
		

	}
	return 0;
}