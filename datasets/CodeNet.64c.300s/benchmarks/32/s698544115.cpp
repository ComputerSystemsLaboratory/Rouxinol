#include <iostream>
using namespace std;
int main(){
	int i,n;
	cin >> n;
	long long a[10000],max = 0,min = 0,sum = 0;
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	max = a[0];
	min = a[0];
	for(int j = 0; j < n; j++){
		if(max < a[j]){
			max = a[j];
		}
		if(min > a[j]){
			min = a[j];
		}
		sum = sum + a[j];
	}
	cout << min << " " << max << " " << sum << endl;

}