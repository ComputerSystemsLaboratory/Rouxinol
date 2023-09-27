#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[5],tmp;
	for(int i=0; i<5 ; i++){
		cin >> a[i];
	}
	for(int j=0;j<4;j++){
		for(int k=j+1;k<5;k++){
			if(a[j]<a[k]){
				tmp = a[j];
				a[j] = a[k];
				a[k] = tmp;
			}
		}
	}

	for(int l =0; l<4 ; l++) {
		cout << a[l] << " ";
	}
	cout << a[4] << "\n";
}