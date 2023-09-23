#include "bits/stdc++.h"

using namespace std;

int main (){

	int n,a[100];
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i - 1];
	}
	reverse(a,a+n);
	for(int b = 1;b <= n;b++){
		cout << a[b - 1];
		if(b != n) cout << " " ;
	}
	cout << endl;



	return 0;
}