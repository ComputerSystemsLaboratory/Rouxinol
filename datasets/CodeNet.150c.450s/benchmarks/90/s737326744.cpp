#include <iostream>
using namespace std;

int main(){
	int n, i;
	int h[200] = {0};
	int most = 0;
	while(cin >> n){
		h[n]++;
		if (most < h[n]) {
			most = h[n];
		}
	}
	for (i = 1; i <= 100; i++) {
		if (h[i] == most) {
			cout << i << endl;
		}
	}
	return 0;
}