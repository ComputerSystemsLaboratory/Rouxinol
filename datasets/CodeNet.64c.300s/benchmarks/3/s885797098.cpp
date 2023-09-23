#include<iostream>
using namespace std;
int main(){
	int n, a[128],b[128];
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		b[n - i] = a[i];
	}
	for (int i = 0; i < n; i++){
		if (i != 0)cout << " ";
		cout << b[i+1];
	}
	cout << endl;
	return 0;
}