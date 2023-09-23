#include <iostream>
using namespace std;
 
int main() {
	while(1){
		int tnok, yj;
		cin >> tnok;
		if (tnok == 0){
			return 0;
		}
		tnok = 1000 - tnok;
		if(tnok >= 500){
			yj = 1;
			tnok = tnok - 500;
		} else {
			yj = 0;
		}
		if(tnok >= 400){
			yj = yj + 4;
			tnok = tnok - 400;
		}
		else if(tnok >= 300){
			yj = yj + 3;
			tnok = tnok - 300;
		}
		else if(tnok >= 200){
			yj = yj + 2;
			tnok = tnok - 200;
		}
		else if(tnok >= 100){
			yj = yj + 1;
			tnok = tnok - 100;
		}
		if(tnok >= 50){
			yj = yj + 1;
			tnok = tnok - 50;
		}
		if(tnok >= 40){
			yj = yj + 4;
			tnok = tnok - 40;
		}
		else if(tnok >= 30){
			yj = yj + 3;
			tnok = tnok - 30;
		}
		else if(tnok >= 20){
			yj = yj + 2;
			tnok = tnok - 20;
		}
		else if(tnok >= 10){
			yj = yj + 1;
		tnok = tnok - 10;
		}
		if(tnok >= 5){
			yj = yj + 1;
			tnok = tnok - 5;
		}
		cout << tnok + yj <<endl;
	}
}