#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a[5];

	for(int i=0; i<5; i++){
	cin >> a[i];
	}

	sort(a, a+5);

	cout << a[4];
	for(int m=3; 0<=m; m--){
		cout << " " << a[m];
	}
	cout << endl;
}