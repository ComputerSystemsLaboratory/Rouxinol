#include<iostream>
using namespace std;
int main(){
	int a[10] = {}, b[10] = {},A=0,B=0;
	for (int i = 0; i < 4; i++){
		cin >> a[i];
		A = A + a[i];
	}
	for (int i = 0; i < 4; i++){
		cin >> b[i];
		B = B + b[i];
	}
	if (A >= B){
		cout << A << endl;
	}
	if (B > A){
		cout << B << endl;
	}
	return 0;
}