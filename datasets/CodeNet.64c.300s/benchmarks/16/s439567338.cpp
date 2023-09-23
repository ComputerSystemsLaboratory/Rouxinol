#include <iostream>
using namespace std;
int main(){
	int n, max_profit = (1 - 1000000000), min;
	cin >> n;
	cin >> min;
	for(int i = 1; i < n; i++){
		int x;
		cin >> x;
		if(max_profit < x - min) max_profit = x - min;
		if(min > x) min = x;
	}
	cout << max_profit << endl;

	return 0;
}
