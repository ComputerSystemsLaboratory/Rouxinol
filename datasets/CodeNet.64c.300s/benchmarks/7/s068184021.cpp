#include <iostream>
using namespace std;

int main(){
	int b[4][13]={0},m,n;
	char x;
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> x;
		cin >> n;
		if(x=='S'){
			b[0][n-1]=1;
		}
		else if(x=='H'){
			b[1][n-1]=1;
		}
		else if(x=='C'){
			b[2][n-1]=1;
		}
		else if(x=='D'){
			b[3][n-1]=1;
		}
	}
		for(int l = 0; l < 13; l++){
			if(b[0][l]==0){
				cout << "S" << " " << l+1 << "\n";
			}
		}
		for(int l = 0; l < 13; l++){
			if(b[1][l]==0){
				cout << "H" << " " << l+1 << "\n";
			}
		}
		for(int l = 0; l < 13; l++){
			if(b[2][l]==0){
				cout << "C" << " " << l+1 << "\n";
			}
		}
		for(int l = 0; l < 13; l++){
			if(b[3][l]==0){
				cout << "D" << " " << l+1 << "\n";
			}
		}



	

	return 0;
}