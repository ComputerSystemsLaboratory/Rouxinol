#include <iostream>
using namespace std;

int main(){
	int a, b, n, c;
	while (cin >> a >> b)
	{
		n = a + b;
		c = 1;
		while( (n = n / 10) != 0 )
			++c;

		cout << c << "\n";
	}
	
	return 0;
}