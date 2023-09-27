#include <iostream>
using namespace std;

int main(){
	int n, i;
	cin >> n;
	int a[n];
	
	for(i = 0; i <= n-1; i++){
		cin >> a[i];
	}
	
	for(i = 0; i <= n-2; i++){
		cout << a[n-(i+1)] << ' ';
	}
	cout << a[0] << endl;
	return 0;
}