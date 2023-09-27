
#include <iostream>
using namespace std;

int main()
{

	int a[100][100] = {0},b[100][100] = {0};
	long sum = 0;

	int n, m, l;
	cin >> n >> m >> l;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < l; j++){
			cin >> b[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			sum = 0;
			for(int k = 0; k < m; k++){
			sum += a[i][k] * b[k][j];
			}
			cout << sum;
			if(j < l - 1){
				cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}