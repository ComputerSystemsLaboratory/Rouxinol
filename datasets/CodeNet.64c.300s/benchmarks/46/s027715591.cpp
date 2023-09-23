#include <iostream>
using namespace std;
#define MAX 1000000

int main()
{
	int n;
	int p[MAX];
	int counter;
	
	p[0] = 0;
	p[1] = 0;
	for (int i = 2; i < MAX; i++) {
		p[i] = 1;
	}
	
	int j = 2;
	while (j < MAX) {
		if (p[j] == 0) {
			j++;
		} else {
			for (int k = j *2; k < MAX; k += j)
				p[k] = 0;
			j++;
		}
	}
	
	while (1) {
		int a, d, n;
		int counter = 0;
		cin >> a >> d >> n;
		if ((a == 0) && (d == 0) && (n == 0)) {
			break;
		}
		int i = -1;
		while (counter < n) {
			i++;
			if (p[a + i * d] == 1) {
				counter++;
			}
		}
		cout << a + i * d << endl;
	}
	return 0;
}