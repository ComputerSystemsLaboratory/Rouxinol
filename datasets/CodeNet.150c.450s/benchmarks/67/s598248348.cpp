#include <iostream>
using namespace std;

int main(){
	for (;;){
		int N;
		cin >> N;
		if (N == 0) break;

		int ans = 0;
		for (int a = 1; a <= N / 2 + 1; a++){
			for (int b = 1; b <= a - 1; b++){
				if (a * (a + 1) - b * (b - 1) == 2 * N) ans ++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}