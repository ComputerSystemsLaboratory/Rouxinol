#include <iostream>

using namespace std;

int main()
{
	unsigned int n;
	cin >> n;

	unsigned long long fractal = 1;
	do
	{
		fractal *= n;
	}
	while(--n > 0);
	
	cout << fractal << endl;

	return 0;
}