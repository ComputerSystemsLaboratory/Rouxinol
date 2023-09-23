#include <iostream>
using namespace std;

int main(){
	long n, x;
	while (cin >> n >> x){
		//cin >> n >> x;
		//n = 100;
		//x = 297;
		if (n == 0 && x == 0) break;
		long cnt = 0;
		for (long i = 1; i <= n; i++){
			if (i > x) break;
			for (long j = i + 1; j <= n; j++){
				if (i + j > x) break;
				for (long k = j + 1; k <= n; k++){
					if (i + j + k == x) cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}