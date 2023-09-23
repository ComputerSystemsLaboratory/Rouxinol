#include <iostream>
using namespace std;

int main(void)
{
	int a, b, sum;
	while(cin >> a >> b){
		int c = 0;
		sum = a + b;
		for (int i = 0; sum / 10 != 0; ++i)
		{
			sum /= 10;
			c++;
		}
		c++;
		cout << c << endl;
	}
}