#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b==0) return a;
	else if (a<b) return gcd(b, a);
	else return gcd(b, a%b);
}

int main()
{
	int a, b;
	
	while ( (cin >> a) && (cin >> b) ) {
		int g = gcd(a, b);
		int l = (a/g) * b;
		cout << g << " " << l << endl;
	}
	
	return 0;
}