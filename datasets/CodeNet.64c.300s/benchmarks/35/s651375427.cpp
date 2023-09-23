#include<iostream>
#define MAX 101
using namespace std;


int main(){

	int adjMar[MAX][MAX];
	int n, i, j, vertice, degree, adjVertice;
	cin >> n;

	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
			adjMar[i][j] = 0;

	for (i = 1; i <= n; i ++) {
		cin >> vertice;
		cin >> degree;
		for (j = 0; j < degree; j++){
			cin >> adjVertice;
			adjMar[vertice][adjVertice] = 1;
		}
	}

	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			cout << adjMar[i][j];
			if (j != n) 
				cout <<' ';
		}
		cout << endl;
	}
}