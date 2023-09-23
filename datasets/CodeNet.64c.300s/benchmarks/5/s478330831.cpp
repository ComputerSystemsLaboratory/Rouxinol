#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i,a[10];
	for(i=0;i<10;i++){
		cin >> a[i];
	}
	sort(a,a+10);
	cout << a[9] <<endl;
	cout << a[8] <<endl;
	cout << a[7] <<endl;
	return 0;
}