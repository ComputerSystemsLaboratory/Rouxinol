#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a[10];
	for (int i = 0; i < 10; i++){
		cin >> a[i];
	}
	sort(a, a+10, less<int>());
	for (int i = 9; i >= 7; i--){
		cout << a[i] << endl;
	}
}