#include<iostream>
using namespace std;

int main(){

	bool pn[1000010];
	int sum[1000010] = {0};
	int n;
	
	for(int i = 0; i <= 1000000; i++) {
		pn[i] = true;
	}
	
	pn[1] = false;
	for(int i = 1; i <= 1000000; i++) {
		if(!pn[i]) continue;
		for(int j = 2; i*j <= 1000000; j++) {
			if(pn[i*j]) pn[i*j] = false;
		}
	}
	
	for(int i = 1; i <= 1000000; i++) {
		sum[i] = sum[i-1] + pn[i];
	}
	
	while(cin >> n) {
		cout << sum[n] << endl;
	}

    return 0;
}