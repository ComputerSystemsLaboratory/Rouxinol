#include <iostream>

int gcd(long unsigned int a, long unsigned int b) {
	if (a % b == 0)
		return b;

	return gcd(b, a%b);
}


int main() {
	{
		using namespace std;
		
		long unsigned int a, b;
		cin >> a >> b;
		{
			if (a < b) {
			long unsigned int temp;
			temp = a;
			a = b;
			b = temp;
		}
		}
		long unsigned int g;
		g = gcd(a, b);

		cout << g << endl;
	}
	return 0;
}