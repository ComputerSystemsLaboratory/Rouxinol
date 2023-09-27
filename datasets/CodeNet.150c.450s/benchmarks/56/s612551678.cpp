#include<iostream>
using namespace std;
int main(){
	long N;
	cin >> N;
	long sum = 0,num[10000];
	for (int i = 0; i < N; i++){
		cin >> num[i];
		sum = sum + num[i];
	}
	long max0=num[0], min0=num[0];
	for (int i = 0; i < N; i++){
		if (max0 < num[i]){
			max0 = num[i];
		}
		if (min0 > num[i]){
			min0 = num[i];
		}
	}
	cout << min0 << " " << max0 << " " << sum << endl;
	return 0;
}