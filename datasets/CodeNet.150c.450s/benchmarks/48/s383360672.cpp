#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define E 1000000

int main()
{
	int e;

	while (cin >> e && e > 0) {
		int Min = E + 1;
		

		for (int i = 0; i <= 1000; i++) {
			for (int j = 0; j <= 100; j++) {
				if (i*i + j*j*j > e)
					break;
				int s;
				s = (e - i*i - j*j*j) + i + j;
				
				Min = min(Min, s);
			}
		}
		cout << Min << endl;

	}

    return 0;
}