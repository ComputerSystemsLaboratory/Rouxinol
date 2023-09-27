// Tazoe

#include <iostream>
using namespace std;

int main()
{
	int A1, A2, A3, A4;
	cin >> A1 >> A2 >> A3 >> A4;

	int B1, B2, B3, B4;
	cin >> B1 >> B2 >> B3 >> B4;

	int S = A1+A2+A3+A4;
	int T = B1+B2+B3+B4;

	if(S>=T){
		cout << S << '\n';
	}
	else{
		cout << T << '\n';
	}

	return 0;
}