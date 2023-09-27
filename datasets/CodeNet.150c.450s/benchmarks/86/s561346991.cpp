#include <iostream>
using namespace std;

int main(){
	int n,m,p;
	int x[101];
	while( cin >> n >> m >> p , n|m|p ){
		int sum = 0;
		for(int i=1 ; i<=n ; ++i ){
			cin >> x[i];
			sum += x[i];
		}
		int ans = 0;
		if( x[m] ) ans = sum * 100*(100-p) / 100.0 / x[m];
		cout << ans << endl;
	}
}