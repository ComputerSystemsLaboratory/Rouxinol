#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a;
	a.push_back(0);
	a[0]=1;
	a.push_back(1);
	a[1]=1;
	for ( int i = 2; i < n + 1; i++ ) {
		a.push_back(i);
		a[i] = a[i-2] + a[i-1];
	}
	cout << a[n] << endl;
	return 0;
}