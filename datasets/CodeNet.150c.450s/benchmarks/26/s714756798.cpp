#include <iostream>
using namespace std;

int main()
{	
	int a[2];
	cin >> a[0] >> a[1];
	if (a[0]>a[1])
		cout << "a > b" << endl;
	if (a[0]<a[1])
		cout << "a < b" << endl;
	if(a[0]==a[1]) cout << "a == b" << endl;
	return 0;
}