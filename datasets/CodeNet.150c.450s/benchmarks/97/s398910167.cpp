#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int b[200][2];

int main(){
	int i, j, n, xmi, xma, ymi, yma, no, d;
	while(1){
		cin >> n;
		if(!n)break;
		b[0][0] = 0;
		b[0][1] = 0;
		for(i=1;i<=n-1;i++){
			cin >> no >> d;
			if(d==0){
				b[i][0] = b[no][0]-1;
				b[i][1] = b[no][1];
			}
			else if(d==1){
				b[i][0] = b[no][0];
				b[i][1] = b[no][1]-1;
			}
			else if(d==2){
				b[i][0] = b[no][0]+1;
				b[i][1] = b[no][1];
			}
			else if(d==3){
				b[i][0] = b[no][0];
				b[i][1] = b[no][1]+1;
			}
		}
		xma=0;
		xmi=0;
		ymi=0;
		yma=0;
		for(i=0;i<=n-1;i++){
			if(b[i][0] < xmi) xmi = b[i][0];
			if(b[i][0] > xma) xma = b[i][0];
			if(b[i][1] < ymi) ymi = b[i][1];
			if(b[i][1] > yma) yma = b[i][1];
			//cout << b[i][0] << " " << b[i][1] << endl;
		}
		
		cout << xma - xmi + 1 << " " << yma - ymi + 1 << endl;
	}
	return 0;
}