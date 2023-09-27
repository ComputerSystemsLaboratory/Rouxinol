#include<iostream>
#define SIZE 100

using namespace std;

int main(void) {

	int n, c, v;
	int G[SIZE][SIZE];
	int A[SIZE][SIZE];

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> v;
		cin >> c;
		for (int j = 0; j < c; j++) {
			cin >> G[v-1][j];
			int tmp = G[v-1][j];
			if (tmp > 0) {
				A[v-1][tmp - 1] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << A[i][0];
		for (int j = 1; j < n; j++) {
			cout <<" "<< A[i][j];
		}
		cout << endl;
	}
	

}


