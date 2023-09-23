#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[3];

	cin >> a[0] >> a[1] >> a[2];

	sort(a, a + 3);

	for (int i = 0; i < 3; i++){
	 	if (i == 2) cout << a[i] << endl;
		else cout << a[i] << " ";
	}
	return (0);
}