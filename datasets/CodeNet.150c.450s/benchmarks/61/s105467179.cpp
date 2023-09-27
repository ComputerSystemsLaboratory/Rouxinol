#include <iostream>

using namespace std;

int main(void){
	while(1){
		int n, a, b, c, x; cin >> n >> a >> b >> c >> x;
		if(!n && !a && !b && !c && !x) break;
		int y[200];
		for(int i=0; i<n; i++) cin >> y[i];
		int xx = x;
		int counter = 0;
		for(int i=0; i<=10000; i++){
			if(i!=0) xx = (a*xx + b) % c;
			if(y[counter] == xx) counter++;
			if(n == counter){
				cout << i << endl;
				break;
			}
			if(i == 10000) cout << -1 << endl;
		}
	}
	return 0;
}
