#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int n, m, d, p, ans;

	while( cin >> n >> m , n || m ){
		ans = 0;
		map<int,int> f;
		for(int i=0 ; i <= 10 ; i++ ){
			f[i] += 0;
		}
		
		for(int i=0 ; i<n ; i++ ){
			cin >> d >> p;
			f[p] += d;
		}
		for(int i=10 ; i >= 0 ; i-- ){
			for( ; f[i] && m ; ){
				m--;
				f[i] -= 1;
			}
			ans += f[i] * i;
		}
		cout << ans << endl;
	}
}