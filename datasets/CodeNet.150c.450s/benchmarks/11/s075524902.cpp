#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define MAX_N 100

using namespace std;
int main(void){
	int tmp,n;
	bool index[5][14];
	char c[5]={0,'S','H','C','D'};
	memset(index,0,sizeof(bool)*70);
	char a;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >>a>>tmp;
		fflush(stdin);
		switch(a){
			case 'S':
				index[1][tmp]=true;
				break;
			case 'H':
				index[2][tmp]=true;
				break;
			case 'C':
				index[3][tmp]=true;
				break;
			case 'D':
				index[4][tmp]=true;
				break;
		}
	}
	for (int i=1;i<=4;i++){
		for (int j=1;j<=13;j++){
				if (!index[i][j]){
				cout << c[i]<<" "<<j<<endl; 
			}
		}
	}

}