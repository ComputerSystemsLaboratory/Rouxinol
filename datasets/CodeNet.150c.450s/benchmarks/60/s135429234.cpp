#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
	int n, k, u, v;
	cin >> n;
	// N * N matrix filled with 0
	vector< vector<int> > mat(n, vector<int>(n, 0));

	for(int i=0; i<n; i++){
		cin >> u >> k;
		// adjust 0 origen
		u--;
		for(int j=0; j<k; j++){
			cin >> v;
			//cout << "vertex: " << v << '\n';
			// adjust 0 origen
			v--;
			mat[u][v] += 1;
		}
		//cout << '\n';
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j==0) printf("%d", mat[i][j]);
			else printf(" %d", mat[i][j]);
		}
		cout << endl;
	}
	return 0;
}