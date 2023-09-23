#include <iostream>
using namespace std;

int main(void)
{
	int x;
	int xcubic = 1;
	cin >> x;

	for(int i = 0; i < 3; i++)
	{
		xcubic *= x;
	}

	cout << xcubic << endl;
	return 0;
}