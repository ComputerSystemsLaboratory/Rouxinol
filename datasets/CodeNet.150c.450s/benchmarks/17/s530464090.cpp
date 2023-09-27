#include <iostream>

using namespace std;

void swap(int& x,int& y)
{
	int tmp = x; x = y; y = tmp;
}

int main()
{
	int a[5];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	
	for (int i=0; i<5; i++) {
		for (int j=4; j>i; j--) {
			if (a[j-1] < a[j]) swap(a[j-1], a[j]);
		}
	}
	
	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;
	
	return 0;
}