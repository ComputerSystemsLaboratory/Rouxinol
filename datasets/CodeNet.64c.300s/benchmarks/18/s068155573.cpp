#include <iostream>

using namespace std;

int p[100];

int main(){
	p[1] = 1;
	p[2] = 2;
	p[3] = 4;
	for(int i = 4; i <= 30; i++){
		p[i] = p[i-1] + p[i-2] + p[i-3];
	}

	int n;
	while(cin >> n, n){
		cout << p[n]/3650+1 << endl;
	}

	return 0;
}