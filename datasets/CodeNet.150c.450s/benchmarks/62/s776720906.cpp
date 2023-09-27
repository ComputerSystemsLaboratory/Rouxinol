#include <iostream>
using namespace std;

#define MAX 3
int main(void)
{
	int i,j;
	int in[MAX];
	int tmp;

	for (i=0; i<MAX; i++) {
		cin >> in[i];
	}

	for (i=0; i<MAX; i++) {
		for (j=(i+1); j<MAX; j++) {
			if (in[i] > in[j]) {
				tmp		= in[i];
				in[i]	= in[j];
				in[j]	= tmp;
			}
		}
	}

	for (i=0; i<MAX; i++) {
		if (i == (MAX-1)) {
			cout << in[i];
		}
		else {
			cout << in[i] << " ";
		}
	}
	cout << endl;

	return 0;
}

