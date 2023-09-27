#include <iostream>
using namespace std;

int main() {
	int m,n;
	int taro[100],hanako[100],taro_sum,hanako_sum;

	while(cin >> n >> m && !(n == 0 && m == 0)) {
		taro_sum = hanako_sum = 0;
		for(int i = 0;i < n;i++) {
			cin >> taro[i];
			taro_sum += taro[i];
		}
		for(int i = 0;i < m;i++) {
			cin >> hanako[i];
			hanako_sum += hanako[i];
		}

		//????????????????????????????????§??????
		int min = 201,res_x,res_y;
		for(int i = 0;i < n;i++) {
			for(int j = 0;j < m;j++) {
				int taro_after = taro_sum - taro[i] + hanako[j],hanako_after = hanako_sum - hanako[j] + taro[i];
				if(taro_after == hanako_after && (taro[i] + hanako[j]) < min) {
					min = taro[i] + hanako[j];
					res_x = taro[i];
					res_y = hanako[j];
				}
			}
		}
		if(min == 201) cout << -1 << endl;
		else cout << res_x << " " << res_y << endl;
	}
}