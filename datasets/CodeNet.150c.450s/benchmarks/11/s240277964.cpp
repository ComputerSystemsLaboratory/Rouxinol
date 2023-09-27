#include <iostream>
using namespace std;

int main(){
	int n, num, card[4][13] = {0};
	char c;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c>>num;
		if(c == 'S')      card[0][num-1]++;
		else if(c == 'H') card[1][num-1]++;
		else if(c == 'C') card[2][num-1]++;
		else if(c == 'D') card[3][num-1]++;
	}

	for(int i=0;i<4;i++){
		if(i == 0)      c = 'S';
		else if(i == 1) c = 'H';
		else if(i == 2) c = 'C';
		else if(i == 3) c = 'D';
		
		for(int j=0;j<13;j++){
			if(card[i][j] == 0){
				cout<<c<<" "<<j+1<<endl;
			}
		}
	}
	return 0;
}