#include <iostream>
using namespace std;

int main(){
	for (;;){
		int N;
		cin >> N;
		if (N == 0) break;

		int ans = 0;
		for (int a = 2; a <= N / 2 + 1; a++){
			for (int b = a - 1; b >= 1; b--){
				int tmp = a * (a + 1) - b * (b - 1);
				if (tmp == 2 * N) ans++;
				else if (tmp > 2 * N) break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}