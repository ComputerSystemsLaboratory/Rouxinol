#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int mp[25][25] = {};

		for (int i = 0;i < n;i++) {
			int a, b;
			cin >> a >> b;
			mp[a][b] = 1;
		}
		int m;
		cin >> m;

		int nx = 10;
		int ny = 10;
		int jw = 0;
		for (int i = 0;i < m;i++) {
			int a;
			char b;
			cin >> b >> a;

			if (b == 'N') {
				for (int i = 0;i < a;i++) {
					ny++;
					if (mp[nx][ny] == 1)jw++;
					mp[nx][ny] = 0;
				}
			}
			else if (b == 'E') {
				for (int i = 0;i < a;i++) {
					nx++;
					if (mp[nx][ny] == 1)jw++;
					mp[nx][ny] = 0;
				}
			}
			else if (b == 'W') {
				for (int i = 0;i < a;i++) {
					nx--;
					if (mp[nx][ny] == 1)jw++;
					mp[nx][ny] = 0;
				}
			}
			else {
				for (int i = 0;i < a;i++) {
					ny--;
					if (mp[nx][ny] == 1)jw++;
					mp[nx][ny] = 0;
				}
			}
		}
		if (n == jw)cout << "Yes" << endl;
		else cout << "No" << endl;
		
	}
	return 0;
}