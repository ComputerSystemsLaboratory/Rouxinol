#include <iostream>
using namespace std;

int main(void){
	int n,max,min;
        long sum = 0;
	cin >> n;
	double *a = new double[n];
	for(int j = 0;j < n; j++){
		cin >> a[j];
	}
	
	min = a[0];
	max = a[0];

	for(int i = 0;i < n;i++){
		if(min > a[i]){
			min = a[i];
		}
		if(max < a[i]){
			max = a[i];
		}
		sum += a[i];
	}
	delete[] a;
	cout << min << " " << max << " " << sum << endl;
	return 0;
} 