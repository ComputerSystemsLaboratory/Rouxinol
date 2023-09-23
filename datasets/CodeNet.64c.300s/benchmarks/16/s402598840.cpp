#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, i, j, maxp, minp;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	
	maxp = a[1]-a[0];
	minp = a[0];
	for(i = 1; i < n; i++){
		maxp = max(maxp, a[i]-minp);
		minp = min(minp, a[i]);
	}
	
	cout << maxp << endl;
	return 0;
}