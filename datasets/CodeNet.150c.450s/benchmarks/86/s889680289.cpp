#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
	while(true){
		int n, m, p;
		cin >> n >> m >> p;
		if(n == 0 && m == 0 && p == 0){ break; }
		vector<int> x(n);
		for(int i = 0; i < n; ++i){ cin >> x[i]; }
		int sum = accumulate(x.begin(), x.end(), 0);
		int answer = 0;
		if(x[m - 1] > 0){ answer = (sum * (100 - p)) / x[m - 1]; }
		cout << answer << endl;
	}
	return 0;
}