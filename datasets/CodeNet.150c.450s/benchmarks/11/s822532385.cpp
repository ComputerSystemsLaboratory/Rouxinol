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
	int n;
	char c; 
	int a;
	int m;
	bool t[4][14];
	cin >> n;
	
	//????????????????????????
	for (int i = 0;i < 4;i++){
		for (int j=1;j <= 13;j++){
			t[i][j]=true;
		}
	}
	
	for (int i = 0;i < n;i++){ 
		cin >> c >> a;
		m = toNumber(c);
		t[m][a] = false;
	}
	
	for (int i = 0;i < 4;i++){
		for (int j=1;j <= 13;j++){
			if (t[i][j]==true) {
				cout << toStr(i) << " " << j << endl;
			}
		}
	}
	//cout << endl;
	return 0;
}