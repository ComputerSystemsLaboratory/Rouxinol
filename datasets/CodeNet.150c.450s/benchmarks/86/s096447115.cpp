#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n, m, p;
	while (1){
		cin >> n >> m >> p;
		if (n == 0 && m == 0 && p == 0) break;
		int sum = 0;
		int winner;
		for (int i = 1; i <= n; i++){
			int c;
			cin >> c;
			if (i == m){
				winner = c;
			}
			sum += c;
		}

		if (winner == 0){
			cout << 0 << endl;
			continue;
		}
		int ans = floor((sum * 100 * (100 - p) / 100) / winner);
		cout << ans << endl;
	}

	return 0;
}