#include <iostream>
using namespace std;

int main() {
	int s;
	cin >> s;

	// 時間の算出
	const int H = 3600;
	int h = s / H;
	int m = s - h * H;
	
	// 分の算出
	const int M = 60;
	m = m / M;
	s = s - h * H - m * M;

	cout << h << ':' << m << ':' << s << endl;
}
