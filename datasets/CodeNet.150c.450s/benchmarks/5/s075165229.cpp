#include <iostream>
using namespace std;

int main()
{
		int n, i;
		cin >> n;
		int a[n];
		for (i=0; i<n; i++) cin >> a[i];
		for (i=n-1; i>=0; i--) {
				if (i==0) cout << a[i] << "\n";
				else cout << a[i] << " ";
		}
}