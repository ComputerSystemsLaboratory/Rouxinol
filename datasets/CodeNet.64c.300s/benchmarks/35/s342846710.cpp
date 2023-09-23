#include <iostream>
using namespace std;


int main(){
	int n,a,b,c;
	cin >> n;

	int table[n][n];
	//??£??\??????????¢????

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			table[i][j] = 0;
		}
	}
	//??£??\??????????????????


	for(int i=0; i<n; i++){
		cin >> a >> b;
		if(b != 0){
			for(int j=0; j<b; j++){
				cin >> c;
				table[a-1][c-1] = 1;
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			cout << table[i][j] << " ";
		}
		cout << table[i][n-1] << endl;
	}
	return 0;
}