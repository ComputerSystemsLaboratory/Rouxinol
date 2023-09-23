#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++){
		cin>>a[i];
	}
	for (int o = n - 1; o >= 0; o--){
		if (o != n - 1){ cout << " "; }
		cout <<a[o];
	}
	cout << endl;
	return 0;
}