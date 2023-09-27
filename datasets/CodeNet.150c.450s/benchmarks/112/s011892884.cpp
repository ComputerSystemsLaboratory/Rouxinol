#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	long i,j,n,m;
	char rend[65536][2],cash;
	while(1){
		cin >> n;
		if(!n) break;
		for(i=0;i<n;i++){scanf(" %c %c",&rend[i][0],&rend[i][1]);}
		cin >> m;
		for(j=0;j<m;j++){
			cin >> cash;
			for(i=0;i<n;i++){
				if(cash==rend[i][0]){cash=rend[i][1];break;}
			}
			cout << cash;
		}
		cout << endl;
	}
	return 0;
}