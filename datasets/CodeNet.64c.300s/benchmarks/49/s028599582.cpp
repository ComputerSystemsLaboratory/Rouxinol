#include <iostream>
using namespace std;
void digitNumber()
{
	int a, b;
	while (cin >> a)
	{
		cin >> b;
		int sum = a + b;
		int count = 0;
		while(sum > 0)
		{
			sum /= 10;
			count++;
		}

		cout << count << endl;
	}
}


int main()
{
	digitNumber();
	return 0;
}