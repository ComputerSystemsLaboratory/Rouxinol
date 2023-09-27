#include <iostream>
using namespace std;

int main(){
	int n, i, x, scard[13] = {0}, hcard[13] = {0}, ccard[13] = {0}, dcard[13] = {0};
	char mark;
	cin >> n;
	
	for(i = 0; i <= n-1; i++){
		cin >> mark;
		switch(mark){
			case 'S':
				cin >> x;
				scard[x-1] = 1;
				break;
			case 'H':
				cin >> x;
				hcard[x-1] = 1;
				break;
			case 'C':
				cin >> x;
				ccard[x-1] = 1;
				break;
			case 'D':
				cin >> x;
				dcard[x-1] = 1;
				break;
		}
	}
	
	for(i = 0; i <= 12; i++){
		if(scard[i] == 0){
			cout << "S " << i+1 << endl;
		}
	}
	for(i = 0; i <= 12; i++){
		if(hcard[i] == 0){
			cout << "H " << i+1 << endl;
		}
	}
	for(i = 0; i <= 12; i++){
		if(ccard[i] == 0){
			cout << "C " << i+1 << endl;
		}
	}
	for(i = 0; i <= 12; i++){
		if(dcard[i] == 0){
			cout << "D " << i+1 << endl;
		}
	}
	
	return 0;
}