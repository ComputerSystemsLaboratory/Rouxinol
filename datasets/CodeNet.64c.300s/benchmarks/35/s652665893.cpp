#include <iostream>
using namespace std;

int a[100][100];
int N,u,k,col;
int main() {
	cin >> N;
	for(int i=0; i<N; ++i) {
		cin >> u >> k;
		for(int l=0; l<k; ++l) {
			cin >> col;
			a[u-1][col-1] = 1;
		}
		cout << a[i][0];
		for(int l=1; l<N; ++l) {
			cout << " " << a[i][l];
		}
		cout << endl;
	}
}