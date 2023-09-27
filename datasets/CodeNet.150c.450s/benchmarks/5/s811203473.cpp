#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long int lint;

void answer()
{
	int n, i;
	int a[100];
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	i--;
	cout << a[i];
	while (i > 0) {
		i--;
		cout << " " << a[i];
	}
	cout << endl;
}

int main()
{
	answer();
	return 0;
}