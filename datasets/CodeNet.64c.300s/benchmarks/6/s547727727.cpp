#include <iostream>
//#include <stdio.h>
using namespace std;

int toNumber(char c){
	switch (c){
	case 'S':
		return 0;
	case 'H':
		return 1;
	case 'C':
		return 2;
	case 'D':
		return 3;
	default:
		return NULL;
		break;
	}
}
char toStr(int n){
	switch(n){
	case 0:
		return 'S';
	case 1:
		return 'H';
	case 2:
		return 'C';
	case 3:
		return 'D';
	default:
		return NULL;
		break;
	}
}

int main(){
	int room[5][4][11];
	int n, b, f, r, v; 
	//room???????????¢
	for (int i=1;i<=4;i++){
		for (int j=1;j<=3;j++){
			for (int k=1;k<=10;k++){
				room[i][j][k]=0;
			}
		}
	}
	cin >> n;
	for (int i = 0;i < n;i++){ 
		cin >> b >> f >> r >> v;
		room[b][f][r] = room[b][f][r] + v;
	}
	
	for (int i=1;i<=4;i++){
		for (int j=1;j<=3;j++){
			for (int k=1;k<=10;k++){
				cout << " " << room[i][j][k] ;
			}
			cout << endl;
		}
		if ( i!= 4 )cout << "####################" << endl;
	}
	
	//cout << endl;
	return 0;
}