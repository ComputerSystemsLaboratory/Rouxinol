#include <iostream>

using namespace std;

int main()
{
	int n;
	long long int a = 1;
	cin >> n;
	for(int i = n; i > 0; i--){
		a *= i;
	}

	cout << a << endl;

	return 0;
}