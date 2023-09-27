#include <iostream>
using namespace std;
int main()
{
	int P[1000000] = {};
	int c = 0, j, k;
	for (k = 2; k < 1000000; ++k){
		if (P[k] == 0){
			++c;
			for (j = 2; j * k < 1000000; ++j)
				P[j * k] = -1;
		}
		P[k] = c;				
	}
	while (cin >> k)
		cout << P[k] << "\n";
	return 0;
}