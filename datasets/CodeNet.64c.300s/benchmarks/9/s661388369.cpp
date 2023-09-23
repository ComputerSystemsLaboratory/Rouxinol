#include <iostream>
using namespace std;

int main(){

	int money = 100000;
	int n;
	cin >> n;

	while (n--)
	{
		money *= 1.05;
		if (money % 1000 != 0)
		{
			money += 1000 - (money % 1000);
		}
	}
	cout << money << endl;

	return 0;
}