#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int r, c;
	int count;
	int a;
	int sumc[100] = {0};
	int	sumr;
	int sum = 0;;
	
	cin >> r >> c;

	for (int i = 0; i <= r; i++) {
		sumr = 0;
		for (int j = 0; j <= c; j++) {
			if (i == r) {
				if (j == c) {
					cout << sum;
					break;
				}
				cout << sumc[j] << " ";
				sum += sumc[j]; 
				continue;
			}

			if (j == c) {
				cout << sumr;
				break;
			}
			cin >> a;
			sumr += a;
			sumc[j] += a;
			cout << a << " ";
		}
		cout << endl;
	}
		
	return (0);
}