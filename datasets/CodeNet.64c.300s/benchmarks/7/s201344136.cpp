#include<iostream>
#define NUM 13
#define TYPE 4
using namespace std;

int main(){
	int n, num, i, j;
	int card[TYPE][NUM] = {0};
	char ch;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>ch>>num;
		switch(ch){
			case 'S':
				card[0][num-1]++;
				break;
			case 'H':
				card[1][num-1]++;
				break;
			case 'C':
				card[2][num-1]++;
				break;
			case 'D':
				card[3][num-1]++;
				break;
		}
	}
	for(i=0;i<TYPE;i++){
		for(j=0;j<NUM;j++){
			if(card[i][j] == 0){
				switch(i){
					case 0:
					ch = 'S';
						break;
					case 1:
						ch = 'H';
						break;
					case 2:
						ch = 'C';
						break;
					case 3:
						ch = 'D';
						break;
				}
				cout << ch << ' ' << j+1 << endl;
			}
		}
	}
	return 0;
}