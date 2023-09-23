#include<iostream>
using namespace std;

int main(){
	int n;
	int a;
	int sum;
	int sum2;
	long int max;
	cin >> n;
	while(n){
		cin >> sum;
		max = sum;
		for(int i=0;i<n-1;i++){
			cin >> sum2;
			sum += sum2;
			if(sum < sum2){
				sum = sum2;
			}
			if(sum > max){
				max = sum;
			}
		}
		cout << max << endl;
		cin >> n;
	}
	return 0;
}