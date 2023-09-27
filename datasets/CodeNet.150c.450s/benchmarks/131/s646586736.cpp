#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int a[1000], l;

int main() {
	int i, j;
	while( cin >> a[0] >> l ) {
		if (!l) break;
		for( i = 0; ; i++ ) {
			for( j = 0; j < i; j++ ) {
				if ( a[i] == a[j] ) {
					cout << j << " " << a[i] << " " << i - j << endl;
					break;
				}
			}
			if ( j < i )
				break;
				
			//Ai+1を作る。(変な計算せずに愚直にやるのが吉)
			int d[6], p = 1;
			for( j = 0; j < l; j++ ) {
				d[j] = (a[i]/p) % 10;
				p *= 10;
			}
			sort(d, d+l);
			
			int maxi = 0, mini = 0;
			p = 1;
			for( j = 0; j < l; j++ ) {
				//cout << d[j] << " ";
				maxi += d[j] * p;
				p *= 10;
			}
			//cout << endl;
			
			sort(d, d+l, greater<int>());
			p = 1;
			for( j = 0; j < l; j++ ) {
				//cout << d[j] << " ";
				mini += d[j] * p;
				p *= 10;
			}
			//cout << endl;
			//cout << endl;
			
			a[i+1] = maxi - mini;
		}
	}
	return 0;
}