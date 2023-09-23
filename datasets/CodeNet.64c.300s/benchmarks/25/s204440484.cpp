#include <iostream>

using namespace std;

int main(){

	int A[5];
	int B[5];

	while(cin >> A[0] >> A[1] >> A[2] >> A[3] >> B[0] >> B[1] >> B[2] >> B[3]){

		int hit = 0 , blow = 0;

		if(A[0] == 0 || A[1] == 0 || A[2] == 0 || A[3] == 0 ||
			B[0] == 0 || B[1] == 0 || B[2] == 0 || B[3] == 0) break;

		for(int i = 0; i < 4; i++){
			if(A[i] == B[i]){
					hit++;
				}
			for(int j = 0; j < 4; j++){

				if(A[i] ==  B[j] && A[i] != B[i]){
					blow++;
				}
			}
		}

		cout << hit << " " << blow << endl;
	}

	return 0;
}