#include <iostream>
using namespace std;

int main(){
	int n,rank;
	int card[4][13]={0};
	char mark;
	cin >> n;
	for(int i=0;i<n;i++){
		int bangou;
		cin >> mark >> rank;
		switch(mark){
			case 'S': bangou = 0; card[bangou][rank-1] = 1 ;break;
			case 'H': bangou = 1; card[bangou][rank-1] = 1 ;break;
			case 'C': bangou = 2; card[bangou][rank-1] = 1 ;break;
			case 'D': bangou = 3; card[bangou][rank-1] = 1 ;break;
		}
		
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			card[i][j];
			if(card[i][j]==0){
				switch(i){
					case 0: cout << "S" <<" "<<j + 1<< "\n"; break;
					case 1: cout << "H" <<" "<<j + 1<< "\n"; break;
					case 2: cout << "C" <<" "<<j + 1<< "\n"; break;
					case 3: cout << "D" <<" "<<j + 1<< "\n"; break;

				}
			}
		

		}
	}


	

}