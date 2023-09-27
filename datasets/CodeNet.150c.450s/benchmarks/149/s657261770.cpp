#include <iostream>
#include <vector>
using namespace std;

vector<int> S(100000, -1);

int main(){
	long n, q;
	cin >> n >> q;
	for (long i = 0; i < n; i++){
		S[i] = i;
	}
	for (long i = 0; i < q; i++){
		long c, x, y;
		cin >> c >> x >> y;
		if (c == 0){
			long sx = S[x];
			long sy = S[y];
			for (long j = 0; j < n; j++){
				if (S[j] == sx){
					S[j] = sy;
				}
			}
		}
		else {
			if (S[x] == S[y]){
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		// for (long j = 0; j < n; j++){
		// 	if (j != 0) cout << " ";
		// 	cout << j;
		// }
		// cout << endl;
	}
	return 0;
}