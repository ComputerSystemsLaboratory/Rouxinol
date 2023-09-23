#include<iostream>
using namespace std;
int main(){
	while (1){
		int n, a[10000] = { 0 }, b[10000] = { 0 }, A = 0, B = 0;
		cin >> n;
		if (n == 0){
			break;
		}
		for (int i = 0; i < n; i++){
			cin >> a[i] >> b[i];
			if (a[i] < b[i]){
				B = B + a[i] + b[i];
			}
			else if (a[i] > b[i]){
				A = A + a[i] + b[i];
			}
			else{
				A = A + a[i];
				B = B + b[i];
			}
		}
		cout << A << " " << B << endl;
	}
	return 0;
}