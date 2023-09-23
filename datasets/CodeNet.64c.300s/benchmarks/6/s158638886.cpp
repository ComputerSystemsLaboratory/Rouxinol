#include<iostream>
using namespace std;

int main(){
	int n,i,j,k,b,f,r,v;
	int matter[4][3][10]={0};



	cin >>n;


	for(i=0;i<n;i++){
		cin >>b>>f>>r>>v;
		matter[b-1][f-1][r-1]+=v;
	}

	for(k=0;k<4;k++){
		for(i=0;i<3;i++){
			for(j=0;j<10;j++){
				cout << " " <<matter[k][i][j];
			}
		cout << endl;
		}
		if(k!=3){
			for(i=1;i<21;i++){
				cout <<"#";
			}
			cout << endl;
		}
	}
}