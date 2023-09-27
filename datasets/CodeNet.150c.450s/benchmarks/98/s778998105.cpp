#include <iostream>
using namespace std;

int main(){
	int n,m;

	while(1){
		cin >> n >> m;
		if((n == 0)&&(m == 0)){
			break;
		}

		int A[n],B[m];
		int Asum = 0;
		int Bsum = 0;
		int check = 0;
		int Sum = 200;
		int Anum,Bnum;

		for (int i = 0; i <= n-1; i++){
			cin >> A[i];
			Asum += A[i];
		}
		for (int i = 0; i <= m-1; i++){
			cin >> B[i];
			Bsum += B[i];
		}

		for (int i = 0; i <= n-1; i++){
			for (int j = 0; j <= m-1; j++){
				if ((Asum - A[i] + B[j]) == (Bsum - B[j] + A[i])){
					//cout << A[i] << B[j] << endl;
					if (Sum >= (A[i] + B[j])){
						Anum = A[i];
						Bnum = B[j];
						Sum = A[i]+B[j];
					}
					check = 1;
				}
			}
		}
		if(check == 1){
			cout << Anum << " " << Bnum << endl;
		}
		if(check == 0){
			cout << -1 << endl;
		}

	}


}