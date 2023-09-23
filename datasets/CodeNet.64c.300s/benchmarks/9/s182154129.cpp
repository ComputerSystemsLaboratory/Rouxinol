#include <iostream>
using namespace std;

int main() {
	//1週間ごとに5%の利子を借金に加え、さらに借金の 1,000 円未満を切り上げます。
	int n;
	cin >> n;
	int money = 100000;
	for	(int i = 0; i < n; i++){
		money *= 1.05;
		if (money % 1000 > 0)	money = (money / 1000 + 1)*1000;
	}
	cout << money << endl;
	return 0;
}