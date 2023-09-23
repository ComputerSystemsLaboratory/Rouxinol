#include <iostream>

using namespace std;

int main(){
	bool card[4][13] = {false};
	char mark;
	int n, x;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> mark >> x;
		if(mark == 'S') card[0][x-1] = true;
		else if(mark == 'H') card[1][x-1] = true;
		else if(mark == 'C') card[2][x-1] = true;
		else if(mark == 'D') card[3][x-1] = true;
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 13; j++){
			if(card[i][j] == false){
				if(i == 0) cout << "S" << " " << j+1 <<endl;
				else if(i == 1) cout << "H" << " " << j+1 <<endl;
				else if(i == 2) cout << "C" << " " << j+1 <<endl;
				else if(i == 3) cout << "D" << " " << j+1 <<endl;
			}
		}
	}
	
	return 0;
}