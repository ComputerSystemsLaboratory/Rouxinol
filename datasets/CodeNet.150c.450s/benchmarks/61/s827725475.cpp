#include <iostream>
#define llint long long

using namespace std;

llint n, a, b, c, x;
llint y[105];

int main(void)
{
	while(1){
		cin >> n >> a >> b >> c >> x;
		if(n == 0) break;
		for(int i = 1; i <= n; i++) cin >> y[i];
		
		llint p = 1;
		for(int i = 0; i <= 10000; i++){
			if(x == y[p]) p++;
			if(p == n+1){
				cout << i << endl;
				break;
			}
			x = (a*x+b)%c;
		}
		if(p <= n) cout << -1 << endl;
	}
	
	return 0;
}
