#include <iostream>
using namespace std;

int main(){
	int matrix[4][3][10]={0},a,b,c,d,m;
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		matrix[a-1][b-1][c-1]=matrix[a-1][b-1][c-1]+d;
	}
	for(int j = 0; j < 3; j++){
		for(int k = 0; k < 3; k++){
			for(int l = 0; l < 10; l++){
				cout << " " << matrix[j][k][l] ;
			}
			cout << "\n" ;
		}
			for(int o = 0; o < 20; o++){
				cout << "#" ;
			
		}
			cout << "\n" ;
	}
	for(int k = 0; k < 3; k++){
			for(int l = 0; l < 10; l++){
				cout << " " << matrix[3][k][l] ;
			}
			cout << "\n" ;

	}
	return 0;
}