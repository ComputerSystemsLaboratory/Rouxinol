#include<iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n;
	m = n - 1;
	int a[100] = {};
	for( int i = 0; i < n; i++ ){ cin >> a[i]; }
	for( int j = 0; j < n; j++ ){ if( m == 0 ){ cout << a[m] << endl;} else { cout << a[m] << " ";} --m; }	
return 0;
}