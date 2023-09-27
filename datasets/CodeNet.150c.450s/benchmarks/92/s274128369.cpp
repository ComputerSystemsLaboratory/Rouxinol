#include <iostream>

using namespace std;

int countDigits(int n)
{
	int digits = 0;
	while (n>0) {
		n /= 10; digits++;
	}
	
	return digits;
}

int main()
{
	int a, b;
	while ( (cin >> a) && (cin >> b) ) {
		cout << countDigits(a+b) << endl;
	}
	
	return 0;
}