#include <iostream>
#include <algorithm>
#include <vector>
#define MAX_PRIMARY_NUM 1000000

using namespace std;

int main(void){
	int a, d, n;
	bool p[MAX_PRIMARY_NUM + 1];
	fill(p, p + MAX_PRIMARY_NUM + 1, true);
	p[0] = p[1] = false;
	for (int i = 2; i * i <= MAX_PRIMARY_NUM; i++){
		if (p[i]){
			for (int j = 2 * i; j <= MAX_PRIMARY_NUM; j += i){
				p[j] = false;
			}
		}
	}
	while (true){
		cin >> a >> d >> n;
		if (a == 0 && d == 0 && n == 0){
			break;
		}
		int i, j = 0;
		// iは等差数列
		// jは等差数列に含まれる素数の合計
		for (i = a; j < n; i += d){
			if (p[i]){
				j++;
			}
		}
		cout << i - d << endl;
	}
	return 0;
}