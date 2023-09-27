// 2014/07/18 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	bool C[4][13];
	for(int i=0; i<4; i++){
		for(int j=0; j<13; j++){
			C[i][j] = false;
		}
	}

	for(int i=0; i<n; i++){
		char c;
		int m;
		cin >> c >> m;

		if(c=='S'){
			C[0][m-1] = true;
		}
		else if(c=='H'){
			C[1][m-1] = true;
		}
		else if(c=='C'){
			C[2][m-1] = true;
		}
		else if(c=='D'){
			C[3][m-1] = true;
		}
	}

	for(int i=0; i<4; i++){
		for(int j=0; j<13; j++){
			if(!C[i][j]){
				if(i==0){
					cout << "S ";
				}
				else if(i==1){
					cout << "H ";
				}
				else if(i==2){
					cout << "C ";
				}
				else if(i==3){
					cout << "D ";
				}

				cout << j+1 << endl;
			}
		}
	}

	return 0;
}