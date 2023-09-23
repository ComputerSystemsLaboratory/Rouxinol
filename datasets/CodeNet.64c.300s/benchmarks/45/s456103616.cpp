#include <iostream>
using namespace std;

int main(void) {
	int N, M, P, X, per_m, champ = 0;
	double sum_money = 0;

	while (cin >> N >> M >> P, N | M | P) {
		per_m = champ = sum_money = 0;

		for (int i = 1; i <= N; i++) {
			cin >> X;
			if (i == M) champ = X;
			sum_money += X;
		}
		sum_money = sum_money * 100 - sum_money * (double)P;
		if (champ != 0) {
			per_m = sum_money / champ;
		} else {
			per_m = 0;
		}
		cout << per_m << endl;
	}
	return 0;
}