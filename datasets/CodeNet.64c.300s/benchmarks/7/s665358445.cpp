#include<iostream>
using namespace std;
int main(){
	bool cards[4][14];
	int n,number,colorn;
	char color;
	cin>>n;
	for(int i=0;i<4;i++){
		for(int j=0;j<14;j++){
			cards[i][j]=0;
			}
		}
		
	for(int i=0;i<n;i++){
		cin>>color>>number;
		if(color=='S') colorn=0;
		if(color=='H') colorn=1;
		if(color=='C') colorn=2;
		if(color=='D') colorn=3;
		
		cards[colorn][number]=1;
		}
	for(int i=0;i<4;i++){
		for(int j=1;j<14;j++){
			if(cards[i][j]==0) {
				if(i==0) color='S';
				if(i==1) color='H';
				if(i==2) color='C';
				if(i==3) color='D';
				cout<<color<<" "<<j<<"\n";
			}
		}
		}
	return 0;
}