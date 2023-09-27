#include<iostream>

using namespace std;

int main() {
	int n, m;
	int h[1500], w[1500];
	while(1) {
		cin >> n >> m;
		if(!n && !m) break;
		
		int list[1500000] = {0};
		int sqn = 0;
		
		for( int i=0; i<n; i++) {
			cin >> h[i];
			for( int j=0; j<i+1; j++) {
				if(i!=j) h[j] += h[i];
				list[ h[j] ] += 1;
			}
		}
		for( int i=0; i<m; i++) {
			cin >> w[i];
			for( int j=0; j<i+1; j++) {
				if(i!=j) w[j] += w[i];
				sqn += list[ w[j] ];
			}
		}
	
		cout << sqn << endl;
	}
	return 0;
}