#include <iostream>
#include <cmath>

using namespace std;

int n, a[10], s;
int ret;

void rec(bool data[10], int cnt, int deep)
{
	if (deep == 10){
		if (cnt == n){
			int sum = 0;
			for (int i = 0; i < 10; i++){
				if (data[i]) {
					sum += a[i];
					// cout << a[i] << " " ;
				}
			}
			// cout << " -> " << sum << endl;
			if (sum == s) ret++;
		}
		return;
	}
	rec(data, cnt, deep + 1);
	data[deep] = true;
	rec(data, cnt + 1, deep + 1);
	data[deep] = false;
	return;
}

int main(void)
{
	for (int i = 0; i < 10; i++){
		a[i] = i;
	}
	while (cin >> n >> s, n || s) {
		ret = 0;
		
		bool data[10];
		fill(data, data + 10, false);
		rec(data, 0, 1);
		data[0] = true;
		rec(data, 1, 1);
		

		cout << ret << endl;
	}

	return 0;
}