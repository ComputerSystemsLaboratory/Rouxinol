#include<iostream>
using namespace std;
long millenium(int y, int m, int  d) {
	long sum = 0;
	y -= 1; m -= 1;
	int w = y % 3;
	sum += (y - w) / 3 * (20 * 30 - 10);
	sum += w*((19 + 20) * 5);
	if ((y + 1) % 3 == 0){
		sum += m * 20;
	}
	else{
		w = m % 2;
		if (w == 0) sum += m * 39 / 2;
		else sum += (m - 1) * 39 / 2 + 20;
	}
	sum += d;
	return sum;
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		int y, m, d; cin >> y >> m >> d;
		cout << millenium(1000, 1, 1) - millenium(y, m, d) << endl;
	}
	return 0;
}