#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int N,A,B,C,X;
	cin >> N;
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> X;

	while (N!=0||A!=0||B!=0||C!=0||X!=0) {
		int *y = new int[ N ];
		int *check = new int [ N ];
		int count_f = -1;
		int count_n = 0;
		bool clear = false;
		int L = 0;
		for (int i = 0; i < N; i++) {
				cin >> y[i];
		}
		while ((!clear) && !(count_f > 10000)) {
				count_f++;
				if (X == y[L]) {
					count_n++;
					L++;
				}
				
				if (count_n == N) {
					clear = true;
				}
				X = ((A*X)+B)%C;
		}
		if (count_f > 10000) {
			count_f = -1;
		}
		cout << count_f << endl;

		cin >> N;
		cin >> A;
		cin >> B;
		cin >> C;
		cin >> X;

		delete[] y; 
	}
	return 0;
}