#include <iostream>
using namespace std;

#define TOUMAX 4
#define KAIMAX 3
#define ROOMMAX 10

int main(void)
{
	int n,b,f,r,v;
	int i,j,k,l;
	int num[TOUMAX][KAIMAX][ROOMMAX] = {0};

	cin >> n;

	for (i=0; i<n; i++) {
		cin >> b;
		cin >> f;
		cin >> r;
		cin >> v;

		num[b-1][f-1][r-1] += v;
	}

	for (i=0; i<TOUMAX; i++) {
		for (j=0; j<KAIMAX; j++) {
			for (k=0; k<ROOMMAX; k++) {
				cout << " " << num[i][j][k];
			}
			cout << endl;
		}
		if (i < (TOUMAX-1)) {
			cout << "####################";
			cout << endl;
		}
	}

	return 0;
}
