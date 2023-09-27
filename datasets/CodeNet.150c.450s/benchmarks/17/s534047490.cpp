#include <iostream>
using namespace std;

int main() {
	int a[5];
	for(int i=0; i<5; i++){
		cin >> a[i];
	}
	for(int j=0; j<5; j++){
		int v = a[j];
		int k = j-1;
		while(a[k]<v && k>=0){
			a[k+1] = a[k];
			k--;
			a[k+1] = v;
		}
	}
	for(int l=0; l<4; l++){
		cout << a[l] << ' ';
	}
	cout << a[4] << endl;
	return 0;
}
