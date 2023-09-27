#include <iostream>

int main(void)
{
	using namespace std;

	int n,m,l;

	cin >> n;
	cin >> m;
	cin >> l;

	long long int MatA[n][m], MatB[m][l], MatC[n][l];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> MatA[i][j];
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<l; j++){
			cin >> MatB[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			MatC[i][j] = 0;
			for(int k=0; k<m; k++){
				MatC[i][j] += MatA[i][k] * MatB[k][j];
			}
			cout << MatC[i][j];
			if(j != l-1) cout << " ";
		}
		cout << endl;
	}

	return 0;
}