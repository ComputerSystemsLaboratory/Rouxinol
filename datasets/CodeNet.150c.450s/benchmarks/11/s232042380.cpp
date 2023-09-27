#include <iostream>

using namespace std;

int main(){
	int n;
	bool card[4][13];
	int i,j;
	for (i=0;i<4;i++){
		for (j=0;j<13;j++){
			card[i][j]=false;
		}
	}
	cin>>n;
	for (i=0;i<n;i++){
		char type;
		int number;
		int index;
		cin>>type>>number;
		switch (type){
			case 'S':
				index=0;
				break;
			case 'H':
				index=1;
				break;
			case 'C':
				index=2;
				break;
			case 'D':
				index=3;
				break;
		}
		card[index][number-1]=true;
	}
	for (i=0;i<4;i++){
		for (j=0;j<13;j++){
			if (!card[i][j]){
				switch (i){
					case 0:
						cout<<"S "<<j+1<<endl;
						break;
					case 1:
						cout<<"H "<<j+1<<endl;
						break;
					case 2:
						cout<<"C "<<j+1<<endl;
						break;
					case 3:
						cout<<"D "<<j+1<<endl;
						break;
				}
			}
		}
	}
	return 0;
}