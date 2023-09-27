#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	int n, i;
	while (1){
		cin >> n;
		int a[35] = {};
		if (n == 0) break;
		a[0] = 0;
		a[1] = 0;
		a[2] = 1;
		for (i = 0; i < n; i++){
			a[i + 3] = a[i + 2] + a[i + 1] + a[i];
		}
		cout << a[n + 2]/3650+1 << endl;
	}
	return 0;
}