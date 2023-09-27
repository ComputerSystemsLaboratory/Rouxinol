#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(void){
	int n1, n2, tmp, row;
	cin>>n1;
	vector < vector <int> > M(n1, vector <int>(n1));

	for (int j=0; j<n1; j++){
		cin>>row;
		cin>>n2;
		for (int i=0; i<n2; i++){
			cin>>tmp;
			M[row-1][tmp-1] = 1;
		}
	}

	for (int i=0; i<n1; i++){
		for (int j=0; j<n1; j++){
			if (j == n1-1)
				cout<<M[i][j]<<endl;
			else
				cout<<M[i][j]<<" ";
		}
	}
	return 0;
} 