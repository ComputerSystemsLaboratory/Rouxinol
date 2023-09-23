#include <iostream>
#include <iomanip>
using namespace std;

void call(int n); 
int main(){

	int A[4][11]={0};
	int B[4][11]={0};
	int C[4][11]={0};
	int D[4][11]={0};
	int b=0,f=0,r=0,v=0;
	int n;

	cin >> n;

	for(int i=0;i<n;i++){
		cin >> b >> f >> r >> v;

		if(b==1){//A
			A[f][r]+=v;
		}else if(b==2){//B
			B[f][r]+=v;
		}else if(b==3){//C
			C[f][r]+=v;
		}else if(b==4){//D
			D[f][r]+=v;
		}
	}

	for(int i=1;i<4;i++){
		for(int k=1;k<11;k++){
			cout << " " << A[i][k];
			if(k==10){
				cout << endl;
			}
		}
	}
	cout << "####################" << endl;
	
	for(int i=1;i<4;i++){
		for(int k=1;k<11;k++){
			cout << " " << B[i][k];
			if(k==10){
				cout << endl;
			}
		}
	}
	cout << "####################" << endl;

	for(int i=1;i<4;i++){
		for(int k=1;k<11;k++){
			cout << " " << C[i][k];
			if(k==10){
				cout << endl;
			}
		}
	}
	cout << "####################" << endl;

	for(int i=1;i<4;i++){
		for(int k=1;k<11;k++){
			cout << " " << D[i][k];
			if(k==10){
				cout << endl;
			}
		}
	}



return 0;
}