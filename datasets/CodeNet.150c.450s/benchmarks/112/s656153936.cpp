#include<stdio.h>
#include<iostream>
using namespace std;

int main(void){
	int n;
	int m;
	char a;
	char jisyo[1000][2];
	char message[10][200000];
	for(int x;x<5;x++){
		cin >> n;
		if(n==0){
			break;
		}
		for(int i=0;i<n;i++){
			cin >> jisyo[i][0];
			cin >> jisyo[i][1];
		}
		cin >> m;
		for(int i=0;i<m;i++){
			cin >> a;
			for(int i0=0;i0<n;i0++){
				if(a==jisyo[i0][0]){
					a=jisyo[i0][1];
					break;
				}
			}
			message[x][i]=a;
		}
		cout << message[x] << endl;
	}
	return 0;
}