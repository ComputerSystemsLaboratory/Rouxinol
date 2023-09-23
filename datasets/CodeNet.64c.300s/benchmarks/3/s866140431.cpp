#include <iostream>

using namespace std;
 
int main(){
	int n;
	cin >> n;

	int arr[n];

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	for(int i=n-1; i>=0; i--) {
		if(i==0) {
			cout << arr[i] << endl;
		}else {
			cout << arr[i] << " ";
		}
	}

	return 0;
}
