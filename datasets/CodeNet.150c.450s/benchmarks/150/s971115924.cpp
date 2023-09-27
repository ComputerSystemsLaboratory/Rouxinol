#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main(){
	int n;
	vector<int> a;
	cin >> n;
	a.resize(n);
	rep(i,n)	cin >> a[i];
	sort( a.begin(), a.end() );
	cout << a[0];
	for( int i=1; i<n; i++ )
		cout << " " << a[i];
	cout << endl;
	return 0;
}