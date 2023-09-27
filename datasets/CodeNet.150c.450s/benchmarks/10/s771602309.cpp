#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,b,f,r,v,house[4][3][10];

	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<10;k++){
				house[i][j][k]=0;
			}
		}
	}

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> b >> f >> r >> v;
		house[b-1][f-1][r-1]=house[b-1][f-1][r-1]+v;
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<10;k++){
				cout << " " << house[i][j][k];
			}
			cout << endl;
		}
		if(i<3){
			cout << "####################" << endl;
		}
	}
}