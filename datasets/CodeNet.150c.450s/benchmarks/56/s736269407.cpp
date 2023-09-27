// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <iomanip>
#include <cstring>
#define INF 1000001
typedef long long llong;
using namespace std;



int main() {
	int max = -INF;
	int min = INF;
	llong sum = 0;
	int N, a_i;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a_i;
		if (max < a_i)max = a_i;
		if (min > a_i)min = a_i;
		sum += a_i;
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}


