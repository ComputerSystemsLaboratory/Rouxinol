#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

struct matrix_size{
	int row;
	int col;
};

int matrixchaincost(vector <matrix_size> &M){
	int n=M.size();
	vector < vector <int> > cost(n, vector <int> (n));
	vector < vector <matrix_size> > X(n, vector <matrix_size> (n));
	for (int i=0; i<n; i++){
		cost[i][i] = 0;
		X[i][i] = M[i];
	}

	for (int length=2; length<=n; length++){
		for (int i=0; i+length<=n; i++){
			int j = i+length-1;
			X[i][j].row = X[i][i].row;
			X[i][j].col = X[j][j].col;
			if (X[i][j-1].col != X[j][j].row){
				cout<<"error"<<endl;
				return NULL;
			}
			int k = i+1;
			int mincost = X[i][k-1].row * X[i][k-1].col * X[k][j].col + cost[i][k-1] + cost[k][j];
			k++;
			while (k<=j){
				int tmp = X[i][k-1].row * X[i][k-1].col * X[k][j].col + cost[i][k-1] + cost[k][j];
				if (tmp<mincost)
					mincost = tmp;
				k++;
			};
			cost[i][j] = mincost;
		}
	}
	return cost[0][n-1];
}

int main(void){
	int n;
	cin>>n;

	vector <matrix_size> M(n);

	for (int i=0; i<n; i++){
		cin>>M[i].row;
		cin>>M[i].col;
	}
	cout<<matrixchaincost(M)<<endl;
	return 0;
} 