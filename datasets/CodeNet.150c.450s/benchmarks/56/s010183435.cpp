#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int min, max;
	long sum;
	cin >> a[0];
	min = a[0];
	max = a[0];
	sum += a[0];
	for(int i = 1; i < n; i++){
		cin >> a[i];
		if(min > a[i]){
			min = a[i];
		}else if(max < a[i]){
			max = a[i];
		}
		sum += a[i];
	}
	cout << min << " " << max << " " << sum << endl;
}