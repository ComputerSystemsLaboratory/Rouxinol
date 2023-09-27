#include <iostream>
using namespace std;

int main(){

	int i,j,n;
	int a[100] = {}, b[100] = {};
	cin >> n;

	for(i=0;i<n;i++){
		cin >> a[i];
	}

	for(j=0;j<n;j++){
			b[j]=a[n-j-1];
		}

	for(j=0;j<n-1;j++){
	cout << b[j] << " "; 
	}cout << b[n-1] << endl;
	
	return 0;
}