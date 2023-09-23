#include <iostream>
using namespace std;


int main()
{	
	int a[5];
	cin >> a[0] >>a[1]>>a[2]>>a[3]>>a[4];
	if(a[0]<a[2]+a[4]||0>a[2]-a[4]||0>a[3]-a[4]||a[1]<a[3]+a[4])
		cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}