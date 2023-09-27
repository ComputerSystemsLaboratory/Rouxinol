#include<iostream>
using namespace std;

int main() {
	int n, m;
	int sn[100] = { 0 };
	int	 sm[100] = { 0 };
	int sum_n, sum_m, ofs;

	while (true) {
		int outn = 1000;
		int outm = 1000;
		int flag = 0;
		sum_n = 0;
		sum_m = 0;
		cin >> n >> m;
		if (n == 0 || m == 0) break;

		for (int i = 0; i < n; i++) {
			cin >> sn[i], sum_n += sn[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> sm[i], sum_m += sm[i];
		}
		ofs = sum_n - sum_m;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				//if (ofs == (sn[i] - sm[j]) * 2) cout << sn[i] << " " << sm[j] << endl, flag = -1;
				if (ofs == (sn[i] - sm[j]) * 2) {
					if (outn + outm > sn[i] + sm[j]) outn = sn[i], outm = sm[j], flag = -1;
				}
			}
		}
		if (flag == -1) cout << outn << " " << outm << endl;
		else cout << -1 << endl;
	}
	return 0;
}