#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, p;
	while(cin >> n >> m >> p && (n || m || p)){
		int x[200], sum = 0;
		for(int i = 0; i < n; ++i){
			cin >> x[i];
			sum += (x[i] * 100);
		}
		sum = sum * (100 - p) / 100;
		
		if(x[m - 1] == 0)
			cout << "0" << endl;
		else
			cout << sum / x[m - 1] << endl;
	}
	return 0;
}