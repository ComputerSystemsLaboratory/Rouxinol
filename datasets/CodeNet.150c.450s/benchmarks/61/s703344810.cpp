#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int mod(int a, int b, int c, int x);

int main(){
	int n, a, b, c, x;
	while(cin >> n >> a >> b >> c >> x, n || a || b || c || x){
		vector<int> y(n);
		
		for(int i = 0; i < n; i++){//input
			cin >> y[i];
		}

		int i, j;
		for(i = 0, j = 0; i <= 10000; i++){
			if(y[j] == x){
				j++;
			}
			x = mod(a, b, c, x);
			if(j >= n){
				break;
			}
		}

		if(i > 10000){
			cout << -1 << endl;
		}else{
			cout << i << endl;
		}
	}

	return 0;
}

int mod(int a, int b, int c, int x){
	int tmp = (a * x + b) % c;
	return tmp;
}
