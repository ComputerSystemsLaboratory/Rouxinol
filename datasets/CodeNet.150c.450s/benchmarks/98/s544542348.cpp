#include<iostream>
#include<algorithm>
#include <numeric>
using namespace std;

int main(){
	int n, m;
	int point_t[100] = { 0 };
	int point_h[100] = { 0 };

	while (cin >> n >> m, n != 0 || m != 0){
		int a = 999, b = 999;
		for (int i = 0; i < n; i++){
			cin >> point_t[i];
		}
		for (int i = 0; i < m; i++){
			cin >> point_h[i];
		}
		int sum_t = accumulate(point_t, point_t + n, 0);
		int sum_h = accumulate(point_h, point_h + m, 0);

		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (sum_t - point_t[i] + point_h[j] == sum_h + point_t[i] - point_h[j]){
					if (a + b > point_t[i] + point_h[j]){
						a = point_t[i];
						b = point_h[j];
					}
				}
			}
		}
		if (a == 999 && b == 999){
			cout << -1 << endl;
		}
		else cout << a << ' ' << b << endl;
	}
	
	return 0;
}