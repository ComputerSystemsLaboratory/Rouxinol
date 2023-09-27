#include <cstdio>
#include <iostream>
#include <list>

using namespace std;

int main()
{
	int n, m;
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		int t[100], h[100], sum_t=0, sum_h=0;
		int i;
		for(i = 0; i < n; i++){
			cin >> t[i];
			sum_t += t[i];
		}
		for(i = 0; i < m; i++){
			cin >> h[i];
			sum_h += h[i];
		}
		int a=-1, b=-1, j;
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				if((sum_t-t[i]+h[j]) == (sum_h+t[i]-h[j])){
					a = t[i];
					b = h[j];
					i = 200;
					break;
				} 
			}
		}
		if(a == -1 && b == -1) cout << -1 << endl;
		else cout << a << " " << b << endl;
	}
	return 0;
}