#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n ;

	int num[n];

	for(int i=0; i<n; i++){
		cin >> num[i];
	}

	for(int i=n-1; i>=1; i--){
		cout << num[i] << " " ;
	}
	
	cout << num[0];

	cout << endl;

	return 0;
}