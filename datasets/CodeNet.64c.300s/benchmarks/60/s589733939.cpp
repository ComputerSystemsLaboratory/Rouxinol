#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int a,b,n,box[17][17],g[40],h[40];
	
	for(int i=1;i<17;i++){
		box[0][i]=0;
		box[i][0]=0;
	}
	box[1][0]=1;
	
	while(1){
		cin >> a >> b ;
		if((a==0)&&(b==0)){
			return 0;
		}
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> g[i] >> h[i];
		}
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				box[i][j]=box[i][j-1]+box[i-1][j];
				for(int i=0;i<n;i++){
					box[g[i]][h[i]]=0;
				}
			}
		}
		cout << box[a][b] << "\n";
	}
return 0;
}