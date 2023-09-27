#include<iostream>
#include<cmath>
using namespace std;

int main(){
	while(true){
		int n;
		cin >> n;
		if(n == 0){
			break;
		}
		int mDistance = 1000000;
		int data[n];
		for(int i = 0; i < n; i++){
			int a = 0;
			cin >> a;
			data[i] = a;
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(abs(data[i] - data[j]) < mDistance){
					mDistance = abs(data[i] - data[j]);
				}
			}
		}
		cout << mDistance << endl;
	}
	return 0;
}