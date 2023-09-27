#include <iostream>
#include <cmath>

#define N 1000000

using namespace std;

int pn[N];

void Eratosthenes()
{
	for (int i=0; i<N; i++) {
		pn[i] = 1;
	}

	for (int i=2; i < (int)sqrt((double)N); i++) {
		if(pn[i]) {
			for (int j=0; i*(j+2)<N; j++) {
				pn[i*(j+2)] = 0;
			}
		}
	}
}

int main()
{
	int n;

	Eratosthenes();

	while (cin >> n)
	{
		int cont = 0;
		for (int i=2; i<=n; i++) {
			if(pn[i])	cont++;
		}

		cout << cont << endl;
	}

	return 0;
}