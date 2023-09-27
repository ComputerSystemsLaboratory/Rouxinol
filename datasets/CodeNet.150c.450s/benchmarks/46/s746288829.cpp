#include <iostream>
using namespace std;

#define TOUMAX 4
#define KAIMAX 3
#define ROOMMAX 10

int main(void)
{
	int n,x;
	int i,j,k;
	int cnt;

	while (1) {
		cin >> n;
		cin >> x;

		if ((n+x) == 0) {
			break;
		}
		else {
			cnt = 0;
			for (i=1; i<(n-1); i++) {
				for (j=(i+1); j<n; j++) {
					for (k=(j+1); k<=n; k++) {
						if ((i+j+k) == x) {
							cnt++;
						}
					}
				}
			}
			cout << cnt << endl;
		}
	}

	return 0;
}

