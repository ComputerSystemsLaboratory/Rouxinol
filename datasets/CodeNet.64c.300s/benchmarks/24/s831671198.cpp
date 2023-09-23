#include <iostream>

using namespace std;

int main(){
	int n, asco, bsco;
	int a[10000], b[10000];

	while (cin >> n, n != 0){

		asco = bsco = 0;

		for (int i = 0; i < n; i++){
			cin >> a[i] >> b[i];
			
			if (a[i] == b[i]){
				asco += a[i];
				bsco += b[i];
			}
			else if(a[i] > b[i]){
				asco += a[i] + b[i];
			}
			else {
				bsco += a[i] + b[i];
			}
		}

		cout << asco << " " << bsco << endl;
	}
	return 0;
}