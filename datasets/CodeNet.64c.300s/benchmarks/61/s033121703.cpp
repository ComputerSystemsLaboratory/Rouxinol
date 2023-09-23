#include <iostream>
#include <cstring>
using namespace std;

static const int MAX_N = 100;

int main()
{

	int r, c, sum = 0;
	int sumc[MAX_N];
	int ss[MAX_N][MAX_N];

	memset(sumc, 0, sizeof(sumc));

	cin >> r >> c;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin >> ss[i][j];
			sum += ss[i][j];
		}
	}

	for(int i = 0; i < r + 1; i++ ) {
		int sumr = 0;
		for(int j = 0; j < c + 1; j++) {
			if(i != r && j != c) {
				sumr += ss[i][j];
				cout << ss[i][j] << " ";
				sumc[j] += ss[i][j];
			}
			else if( i != r && j == c ) {
				cout << sumr << endl;
			}
			else {
				j != c ? cout << sumc[j] << " " : cout << sum << endl;
			}
		}
	}

	return 0;

}