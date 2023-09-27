#include <iostream>
using namespace std;
int a[10005], b[505];
int n, q;

int search(int *a, int c)
{
	int idx = 0;
	a[n] = c;
	while(a[idx] != a[n])	idx ++;
	
	return idx != n;
}

int main()
{
	int sum = 0;
	cin >> n;
	for(int i = 0; i < n; ++ i)
		cin >> a[i];
	
	cin >> q;
	for(int i = 0; i < q; ++ i)
	{
		cin >> b[i];
		if(search(a, b[i]))	sum ++;
	}
	
	cout << sum << endl;
	
	return 0;
}
