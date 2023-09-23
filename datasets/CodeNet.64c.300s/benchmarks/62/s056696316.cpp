#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, m, sum;
	cin >> n >> m;
	int mat[n*m];
	int vec[m];
	for(int i =0; i < n*m; i++){
		cin >> mat[i];
	}
	for(int i = 0; i < m; i++){
		cin >> vec[i];
	}
	for(int y = 0; y < n; y++){
		sum = 0;
		for(int x = 0; x < m; x++){
			sum += mat[y*m+x] * vec[x];
		}
		cout << sum << endl;
	}
	return 0;
}	

