#include <iostream>
using namespace std;

int main(){
	int n, Y, M, D;
	int Yn, Mn, Dn;
	cin >> n;
	int *person = new int[n];

	for(int i = 0; i < n; i++){
		cin >> Y >> M >> D;
		Yn = 0; Mn = 0; Dn = 0;
		for(int j = Y + 1; j < 1000; j++){
			if(j >= 3 && j % 3 == 0){
				Yn += 200;
			}else{
				Yn += 195;
			}
		}

		for(int j = M + 1; j <= 10; j++){
			if(Y >= 3 && Y % 3 == 0){
				Mn += 20;
			}else{
				if(j % 2 == 0){
					Mn += 19;
				}else{
					Mn += 20;
				}
			}
		}

		if(M % 2 != 0){
			Dn = 20 - D;
		}else{
			if(Y >= 3 && Y % 3 == 0){
				Dn = 20 - D;
			}else{
				Dn = 19 - D;
			}
		}
		person[i] = Yn + Mn + Dn + 1;
	}

	for(int i = 0; i < n; i++){
		cout << person[i] << endl;
	}

	return 0;
}