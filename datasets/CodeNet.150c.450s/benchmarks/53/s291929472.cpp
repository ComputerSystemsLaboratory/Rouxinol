#include<iostream>
#include<cmath>
using namespace std;

//素数判定(素数ならtrue)
bool Prime(int prime)
{
	//偶数除く
	if (prime == 2) {
		return true;
	}
	else if (prime % 2 == 0 || prime < 2) {
		return false;
	}

	float Asqrt = sqrtf(prime);

	for (int i = 3; i <= Asqrt; i += 2) {
		if (prime%i == 0) {
			return false;
		}
	}

	return true;
}

int main()
{
	int n;

	cin >> n;
	
	cout << n << ":";

	for (int prime = 2;; prime++) {

		if (Prime(n)) {
			cout << " " << n << endl;
			break;
		}

		while (true)
		{
			//素数 かつ 素因数の場合
			if (Prime(prime) && n%prime == 0) {
				n /= prime;
				cout << " " << prime;
				
				if (n == 1) {
					cout << endl;
					exit(0);
				}

				//分解可能なら続ける
				continue;
			}

			//分解不可でbreak;
			break;
		}

	}

	return 0;
}
