#include<iostream> 

using namespace std;

// int型に収まりきらないので変えた。
// 正しい型を書くのが面倒になったのでテンプレートで型推論させる。
template<typename T>
T func(T x) {
	return x <= 1 ? 1 : x * func(x - 1);
}

int main() {
	long long n;

	cin >> n;

	cout << func(n) << endl;

	return 0;
}