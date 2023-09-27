#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a[4],b[4];
	while(1){
		if(not (cin >> a[0] >> a[1] >> a[2] >> a[3])) break;
		if(not (cin >> b[0] >> b[1] >> b[2] >> b[3])) break;
		int hit = 0;
		int blow = 0;
		for(int i=0;i<4;i++){
			if(a[i]==b[i]) hit++;
			for(int j=1;j<=3;j++) if(a[i]==b[(i+j)%4]) blow++;
		}
		cout << hit << " " <<  blow << endl;
	}
}