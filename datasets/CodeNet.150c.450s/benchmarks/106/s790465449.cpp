#include <iostream>
using namespace std;

int main()
{
		int a, b, c, n;
		cin >> a >> b >> c;
		if (a==b && c%a==0) cout << 1 << "\n";
		else {
				for (int i=a; i<=b; i++) {
						if (c%i==0) n++;
				}
				cout << n << "\n";
		}
}