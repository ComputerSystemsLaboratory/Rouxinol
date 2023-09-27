#include <iostream>
using namespace std;
int main()
{
	int d, k, s, x;
	while (cin >> d){
		s = x = 0;
		k = 600 / d;
		for (int i = 0; i < k; ++i, x += d)
			s += x * x * d;
		cout << s << "\n";
	}
	return 0;
}