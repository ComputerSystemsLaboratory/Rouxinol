#include "iostream"
using namespace std;

int main()
{

	int x[100][100];
	int y[100][100];
	long c[100][100];

	int n, m, l;
	cin >> n >> m >> l;

	// c[100][100]の初期化
	for (int i = 0; i <100; ++i) {
		for (int j = 0; j < 100; ++j) {
			c[i][j] = 0;
		}
	}


	//インプット１x
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> x[i][j];
		}
	}

	//インプット２y
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < l; ++j) {
			cin >> y[i][j];
		}
	}

	//アウトプット
	for (int i = 0; i < n; i++){

		for (int j = 0; j < l; ++j) {

			for (int k = 0; k < m; k++){

				c[i][j] += x[i][k] * y[k][j];

			}

			cout << c[i][j];


			if (l-1!=j){
				cout << " ";
			}

		}




		cout << endl;

	}


	return 0;
}

