#include <iostream>
using namespace std;
void dump(int* a, int n){
	for(int k = 0; k < n; ++k){
		cout << a[k];
		if( k != n - 1)
			cout << " ";
	}
	cout << "\n";
}

int main()
{
	int n, i, j, k, v, a[100] = {};
	cin >> n;
	for(i = 0; i < n; ++i) cin >> a[i];
	dump(a, n);

	if( n == 1)
		return 0;

	for(i = 1; i <= n-1; ++i){
		v = a[i];
		j = i - 1;
		while( j >= 0 && a[j] > v ){
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = v;
		dump(a, n);
	}

	return 0;
}