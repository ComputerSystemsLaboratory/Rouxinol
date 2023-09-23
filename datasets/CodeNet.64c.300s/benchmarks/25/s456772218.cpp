#include <iostream>

using namespace std;

int main(){
	int a[4];
	int b[4];
	int m, n;

	while(cin >> a[0] >> a[1] >> a[2] >> a[3]){
		
	int hit=0;
	int blow=0;
	for(int i=0; i<4; i++){
		cin >> b[i];
	}
	for(m=0; m<4; m++){
		for(n=0; n<4; n++){
			if(a[m] == b[n] && m == n){
				hit = hit + 1;
			}
			else if(a[m] == b[n]){
				blow = blow + 1;
			}
		}
	}
		
	cout << hit << " " << blow << endl;
}
}