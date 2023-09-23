
#include <iostream>
using namespace std;


int main(){
	
	int n;
	cin >> n;
	int A[3][10],B[3][10],C[3][10],D[3][10];
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 10;j++){
			A[i][j] = B[i][j] = C[i][j] = D[i][j] = 0;
		}
	}
	for(int i = 0;i < n;i++){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		if(a == 1) A[b-1][c-1] += d;
		else if(a == 2) B[b-1][c-1] += d;
		else if(a == 3) C[b-1][c-1] += d;
		else if(a == 4) D[b-1][c-1] += d;
	}
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 10;j++){
			cout << " " << A[i][j];
		}
		cout << endl;
	}
	cout << "####################\n";
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 10;j++){
			cout << " " << B[i][j];
		}
		cout << endl;
	}
	cout << "####################\n";
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 10;j++){
			cout << " " << C[i][j];
		}
		cout << endl;
	}
	cout << "####################\n";
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 10;j++){
			cout << " " << D[i][j];
		}
		cout << endl;
	}
	return 0;
}