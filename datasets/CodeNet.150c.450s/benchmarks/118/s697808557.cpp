#include <iostream>

using namespace std;

int calc(int y, int m, int d) {
	int res = 0;
	res += (2*(5*19+5*20)+(10*20))*((y-1) / 3) + (5*19+5*20)*((y-1) % 3);
	res += (y%3)?(((m-1)/2)*(20+19)+((m-1)%2)*(20)):((m-1)*20);
	res += (d-1);

	return res;
}

int main() {
	int n; cin >> n;
	while(n--) {
		int y, m, d; cin >> y >> m >> d;
		cout << calc(1000, 1, 1) - calc(y, m, d) << endl;
	}
	return 0;
}