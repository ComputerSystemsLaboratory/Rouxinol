#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int n,m;
	cin >> n;
	cin >> m;

	while (n != 0 || m != 0) {
		int *taro = new int[ n ];
		int *hana = new int[ m ];
		int sum = 0;
		int sum_t = 0;
		int sum_h = 0;

		for (int i = 0; i < n; i++) {
			cin >> taro[i];
			sum += taro[i];
			sum_t += taro[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> hana[i];
			sum += hana[i];
			sum_h += hana[i];
		}
		if (sum % 2 != 0){
			cout << -1 << endl;
		}else{
			int swap_t,swap_h;
			bool find = false;
			sum = sum / 2;
			for (int i = 0; i < n && !find; i++) {
				for (int j = 0; j < m && !find; j++) {
					if (sum_t-taro[i]+hana[j] == sum) {
						if (sum_h-hana[j]+taro[i] == sum) {
							find = true;
							swap_t = taro[i];
							swap_h = hana[j];
						}
					}
				}
			}
			if (!find) {
				cout << -1 << endl;
			}else{
				cout << swap_t << " " << swap_h << endl;
				find = false;
			}	
		}
		delete[] taro;
		delete[] hana;

		cin >> n;
		cin >> m;
	}
	return 0;
}