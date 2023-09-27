#include <iostream>
using namespace std;

int main(void)
{
	int n,m,a;

	
	while(cin >> n >> m, n | m){
		int d[100001] = {};
		cin >> d[0];
	
		for(int i = 1; i < n; i++){
			cin >> a;
			d[i] += d[i-1] + a;
		}
		int MAX = 0;
		for(int i = 0; i < n - m; i++){
			if(d[i+m] - d[i] > MAX)
				MAX = d[i+m] - d[i];
		}
		cout << MAX << endl;
	}

	return 0;
}