
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


//
int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1){
		int pts[] = {0,0};
		int a,b,n;
		cin >> n;
		if(n == 0) break;
		for(int i = 0; i < n; i ++) {
			cin >> a >> b;
			if(a > b) {
				pts[0] += (a+b);
			} else if(a < b) {
				pts[1] += (a+b);
			} else {
				pts[0] += a;
				pts[1] += b;
			}
		}
		cout << pts[0] << " " << pts[1] << endl;

	}

	//while(1){}
	return 0;
}