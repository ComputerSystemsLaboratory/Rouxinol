#include <iostream>
using namespace std;

int n,p,stone,check;

int main(){
	while(cin >> n >> p){
		if ((n == 0)&&(p == 0)){
			break;
		}
		int A[n];
		for (int i = 0; i <= n-1; i++){
			A[i] = 0;
		}
		stone = p;
		check = 0;

		while (check == 0){
			for(int i = 0; i <= n-1; i++){
				if (stone != 0){
					A[i] += 1;
					stone += -1;
					if (A[i] == p){
						cout << i << endl;
						check = 1;
						break;
					}
				}
				else if ((stone == 0)&&(check == 0)){
						stone = A[i];
						A[i] = 0;
				}
				//cout << i << A[i] << stone << endl;

			}
		}
	}
}