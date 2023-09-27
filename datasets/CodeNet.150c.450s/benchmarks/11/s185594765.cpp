#include<iostream>
using namespace std;

int main(){
	int i, j, n;
	bool cards[4][13] ={false};

	cin >> n;

	for (i = 0; i < n; ++i){
		int num;
		char mark;
		cin >> mark >> num;
		switch(mark){
			case 'S': cards[0][num-1] = true; break;
			case 'H': cards[1][num-1] = true; break;			
			case 'C': cards[2][num-1] = true; break;
			case 'D': cards[3][num-1] = true; break;		
		}
	}
	
	for (i = 0; i < 4; ++i){
		for (j = 0; j < 13; ++j){
			if (cards[i][j] == false){
				switch(i){
					case 0: cout << "S "; break;
					case 1: cout << "H "; break;
					case 2: cout << "C "; break;
					case 3: cout << "D "; break;
				}
				cout << j+1 << endl;
			}
		}
	}
}