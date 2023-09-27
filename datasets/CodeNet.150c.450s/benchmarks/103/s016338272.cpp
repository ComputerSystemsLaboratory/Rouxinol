#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int n, s;
  int soi[10][101] = {};
	
	soi[1][0] = 1;
	
	for(int i=1; i<=9; i++){
		for(int j=i; j>0; j--){
			for(int k=0; k<=100; k++){
				if(soi[j][k] != 0){
					soi[j+1][k + i] += soi[j][k];
				}
			}
		}
		soi[1][i] = 1;
	}
	
	while(1){
		cin >> n >> s;
		if(n == 0 && s == 0) break;
		
		cout << soi[n][s] << endl;
		
	}

  return 0;

}