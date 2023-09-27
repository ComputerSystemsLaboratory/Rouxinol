#include <iostream>
#define llint long long

using namespace std;

llint n, m, p;
llint x[105];

int main(void)
{
	while(1){
		cin >> n >> m >> p;
		if(n == 0) break;
		for(int i = 1; i <= n; i++) cin >> x[i];
		
		if(x[m] == 0){
			cout << 0 << endl;
			continue;
		}
		
		llint sum = 0;
		for(int i = 1; i <= n; i++) sum += x[i] * 100;
		sum = sum * (100-p) / 100;
		
		cout << sum / x[m] << endl;
	}
	return 0;
}
