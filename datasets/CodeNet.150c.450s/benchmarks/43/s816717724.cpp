#include <iostream>
using namespace std;

int main(){

	while(true){

		int n;
		cin >> n;

		if(n == 0){
			break;
		}

		int* a = new int[n];
		int* b = new int[n];

		for(int i = 0; i < n; i++){
			cin >> a[i] >> b[i];
		}

		int a_total = 0;
		int b_total = 0;

		for(int i = 0; i < n; i++){
			if(a[i] > b[i]){
				a_total += a[i] + b[i];
			}
			else if(a[i] < b[i]){
				b_total += a[i] + b[i];
			}
			else{
				a_total += a[i];
				b_total += b[i];
			}
		}

		cout << a_total << " " << b_total << endl;

	}
}