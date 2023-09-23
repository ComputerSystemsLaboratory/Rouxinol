#include <iostream>
using namespace std;

int main(){
	
	int date[20][20] = {0}, n, number, i, j;
	char mark;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		
		cin >> mark >> number;
		
		if(mark == 'S'){	date[0][number - 1] = 1;}
		if(mark == 'H'){	date[1][number - 1] = 1;}
		if(mark == 'C'){	date[2][number - 1] = 1;}
		if(mark == 'D'){	date[3][number - 1] = 1;}
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 13; j++){
			
			if(date[i][j] == 0){
				
				if(i == 0){	cout << "S " << j+1 << endl;}
				if(i == 1){	cout << "H " << j+1 << endl;}
				if(i == 2){	cout << "C " << j+1 << endl;}
				if(i == 3){	cout << "D " << j+1 << endl;}
			}
		}
	}
	
	return 0;
}