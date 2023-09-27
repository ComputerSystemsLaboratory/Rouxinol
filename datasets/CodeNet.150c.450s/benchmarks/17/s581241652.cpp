#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[5];
	for(int i = 0; i < 5; i++){
		cin >> a[i];
	}
	sort(a,a+5);
	cout << a[4];
	for(int i = 1; i < 5; i++){
		cout << " " << a[4-i];
	}
	cout << endl;
}