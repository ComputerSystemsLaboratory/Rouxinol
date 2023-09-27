#include<iostream>
using namespace std;

int main()
{
	int S ,T ,U;
	cin >> S;
	T = S / 3600;
	U = S / 60 - 60 * T;
	cout << T << ":" << U << ":" << S % 60  << "\n";
	return 0;
}