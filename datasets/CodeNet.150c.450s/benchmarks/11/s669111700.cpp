#include <iostream>
using namespace std;

int main(){
	int n,k;
	char c;
	bool card[4][13]; //0=SHCD 13=num
	cin>>n;
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			card[i][j]=true;
		}
	}
	while(n--){
		cin >> c >> k;
		switch(c){
			case 'S':
				card[0][k-1] = false;	//exist
				break;
			case 'H':
				card[1][k-1] = false;
				break;
			case 'C':
				card[2][k-1] = false;
				break;
			case 'D':
				card[3][k-1] =false;
				break;
		}
	}

		for(int i=0;i<4;i++){
			for(int j=0;j<13;j++){
				if(card[i][j]){
					switch(i){
						case 0:
							cout << 'S';
							break;
						case 1:
							cout << 'H';
							break;
						case 2:
							cout << 'C';
							break;
						case 3:
							cout << 'D';
							break;
					}
					cout << ' ' << j+1 << endl;
				}
			}
		}
	return 0;
}