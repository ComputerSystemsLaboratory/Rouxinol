#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	int a[100] = { 0 };
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = n; i > 1; i--){
		cout << a[i-1] << " ";

	}
	cout <<a[0]<< endl;
	return 0;
}