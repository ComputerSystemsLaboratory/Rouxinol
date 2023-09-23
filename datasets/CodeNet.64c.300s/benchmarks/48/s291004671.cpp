#include <iostream>
using namespace std;
int main()
{
	int A[30] = {};
	int P[1000000] = {};
	int i = 0, k;
	while (cin >> k) A[i++] = k;
	int c = 0, j;
	for (int k = 2; k < 1000000; ++k){
		if (P[k] == 0){
			P[k] = ++c;
			for (j = 2; j * k < 1000000; ++j)
				P[j * k] = -1;
		}
		else if (P[k] == -1)
			P[k] = c;		
	}
	for (j = 0; j < i; ++j)
		cout << P[A[j]] << "\n";
	return 0;
}