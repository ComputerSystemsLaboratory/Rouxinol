#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n, m, p;
	while(cin >> n >> m >> p, n || m || p){
		vector<int> x(n);
		int bet = 0;
		
		for(int i = 0; i < n; i++){//input
			cin >> x[i];
			bet += x[i];
		}

		bet = bet * (100 - p);
		if(x[m-1] == 0){
			cout << 0 << endl;
		}else{
			double tmp = bet/x[m-1];
			cout << (int)tmp << endl;
		}
	}

	return 0;
}
