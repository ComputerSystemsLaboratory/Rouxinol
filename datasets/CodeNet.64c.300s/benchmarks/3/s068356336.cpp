#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (i == n - 1){
			cout << a[i];
			for (i=n-2; i >= 0; i--){
				cout << " " << a[i];
			}
			cout << endl;
			break;
		}
	}
	return 0;
	}
