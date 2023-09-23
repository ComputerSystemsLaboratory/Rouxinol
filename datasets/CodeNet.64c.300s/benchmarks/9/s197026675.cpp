#include <iostream>

using namespace std;


int main(void)
{
	int n;
	int debt = 100000;

	cin >> n;

	while(n > 0){
		debt *= 1.05;
		debt += (debt % 1000) ? 1000 - (debt % 1000) : 0;
		n--;
	}

	cout << debt << endl;

	return 0;
}