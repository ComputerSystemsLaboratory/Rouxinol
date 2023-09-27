#include<iostream>

using namespace std;

int main(void) {
	int i;
	char a[20];
	
	cin >> a;
	
	for(i=0; a[i] != 0; i++);
	for(i-=1; i>=0; i--) {
		cout << a[i];
	}
	cout << endl;
	
	return 0;
}