#include<iostream>
using namespace std;

int main(){
	int card[4][13] = {};
	int maisuu;
	
	cin >> maisuu ;
	
	for(int i=0; i<maisuu; i++){
		char egara;
		int rank, egara2;
		cin >> egara >> rank;
		switch(egara){
			case 'S':
			  egara2 = 0;
			  break;
			case 'H':
			  egara2 = 1;
			  break;
			case 'C':
			  egara2 = 2;
			  break;
			case 'D':
			  egara2 = 3;
			  break;
		}
		card[egara2][rank - 1] = 1;
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<13; j++){
			if(card[i][j] == 0){
				switch(i){
					case 0:
						cout << 'S' << " " ;
						break;
				    case 1:
						cout << 'H' << " " ;
						break;
				    case 2:
						cout << 'C' << " " ;
						break;
				    case 3:
					    cout << 'D' << " " ;
						break;
				}
				cout << j + 1 << endl;
			}
		}
	}
	
	
	return 0;
	 }
	