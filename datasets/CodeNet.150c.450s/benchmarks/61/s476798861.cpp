#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N, A, B, C, X;
	while (true) {
		cin >> N >> A >> B >> C >> X;
		if (!N & !A && !B && !C && !X) { break; }
		int res = 0;

		vector<int> Y(N);
		for (int i = 0; i < N; i++) { cin >> Y[i]; }
		
		int rail = 0;
		for (int i = 0; i <= 10000 && rail < N; i++) {
			if (X == Y[rail]) {
				res = i;
				rail++;
			}
			X = (A * X + B) % C;
		}

		if (rail == N) {
			cout << res << endl;
		} else {
			cout << "-1" << endl;
		}
	}
	
	return 0;
}