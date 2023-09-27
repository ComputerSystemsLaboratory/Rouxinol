#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N, a, x,s;
	x = 0;
	cin >> N;
	while (N > 0) {
		cin >> a;
		
		s = 0;
		for (int i = 2;i <= sqrt(a);i++) {
			if (a%i == 0) {
				s = 1;
				break;
			}
		}
		if (s==0)
			x++;
		N--;
	}
	cout << x << endl;
}