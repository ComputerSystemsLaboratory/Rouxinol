#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[5];
	for(int i = 0;i < 5;i++)cin >> a[i];
	sort(a, a+5);
	reverse(a, a+5);
	for(int i = 0;i < 4;i++)cout << a[i] << " ";
	cout << a[4] << endl;
	return 0; 
}