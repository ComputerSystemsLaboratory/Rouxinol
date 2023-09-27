#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[5];
	for(int i=0;i<5;i++){
		cin >> a[i];
	}
	sort(a,a+5);
	cout << a[4] << ' ';
	cout << a[3] << ' ';
	cout << a[2] << ' ';
	cout << a[1] << ' ';
	cout << a[0] << endl;
	return 0;
}