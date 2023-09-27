#include<iostream>
#include<string>
using namespace std;
int main(){
	int card[4][14]={0};
	int i,n,c,j;
	char x;
	char a[]={'S','H','C','D'};
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>c;
		if(x=='S'){
			card[0][c]=1;
		}
		else if(x=='H'){
			card[1][c]=1;
		}
		else if(x=='C'){
			card[2][c]=1;
		}
		else{
			card[3][c]=1;
		}
	}
	for(i=0;i<4;i++){
		for(j=1;j<14;j++){
			if(card[i][j]==0){
				cout<<a[i]<<" "<<j<<endl;
			}
		}
	}
	return 0;
}