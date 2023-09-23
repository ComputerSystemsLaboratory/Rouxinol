#include <iostream>

using namespace std;

int main() {
	int A, B;
	int A1, A2, A3, A4;
	int B1, B2, B3, B4;
	cin >> A1 >> A2 >> A3 >> A4;
	A = A1 + A2 + A3 + A4;
	cin >> B1 >> B2 >> B3 >> B4;
	B = B1 + B2 + B3 + B4;

	cout << (A>B?A:B) << endl;
	return 0;
}