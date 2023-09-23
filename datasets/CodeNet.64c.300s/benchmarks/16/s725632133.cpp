#include<bits/stdc++.h>
using namespace std;

#define INF 10000000000

int main(){
	int n, r;
	long maxv = -INF, minv = INF;
	
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> r;
		
		maxv = max(maxv, (long)r - minv);
		minv = min(minv, (long)r);
	}
	
	cout << maxv << endl;
	
	return 0;

}