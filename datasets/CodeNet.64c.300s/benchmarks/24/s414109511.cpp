#include <stdio.h>
#include <iostream>

using namespace std;


int main(){
	int n, a, b, ta, tb;

	while (1){
		cin >> n;
		if (n == 0)break;
		ta = tb = 0;

		for (int i = 0; i < n; i++){
			cin >> a >> b;
			if (a == b){
				ta += a;
				tb += b;
			}
			else{
				a>b ? ta += a + b : tb += a + b;
			}
		}

		cout << ta << " " << tb << endl;
	}
	return 0;
}