#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	long int a[n];
	long int i;
	long int max = -1000000;
	long int min = 1000000;
	long int sum = 0;

	for(i=0; i<n; i++){
		cin >> a[i];
	}

	for(i=0; i<n; i++){
		
		if(max<a[i]){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
		sum = sum + a[i];
	}

	cout << min << " " << max << " " << sum << endl;

}