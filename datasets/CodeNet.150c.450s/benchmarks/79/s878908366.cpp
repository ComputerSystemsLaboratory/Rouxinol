#include <iostream>
using namespace std;

int n,r;

int main(){

	while(1){
    cin >> n >> r;
    if ((n == 0)&&(r == 0)){
          break;
		}
	int A[n];
for (int i = 0; i <= n-1; i++){
		A[i] = n-i;
		//cout << A[i] << endl;
	}
	int p,c;


for (int i = r; i >=1; i--){

		cin >> p >> c;

		int M[p-1];
		int N[c];
for (int i = 0; i <= p-2; i++){
			M[i] = A[i];
		}
for (int i = 0; i <= c-1; i++){
			N[i] = A[p-1+i];
		}
		//??????
for (int i = 0; i <= c-1; i++){
			A[i]  = N[i];
		}
for (int i = 0; i <= p-2; i++){
			A[c+i]  = M[i];
		}
		if(i == 1){
			cout << A[0] << endl;
		}

	}
  }
}