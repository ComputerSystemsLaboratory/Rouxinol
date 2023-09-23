#include<iostream>
using namespace std;

int main(void){

	int a[5001];
	for(int i=0; i<5001; i++) a[i] = 0;

	int n;
	while(cin >> n){
		
		if(n==0) break;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}

		int ans = -999999;
		int sum = 0;

		for(int i=0; i<n; i++){
			for(int j=0; j<(n-i); j++){
				sum = sum + a[i+j];
				if(sum>ans) ans=sum;
			}
			sum = 0;
		}

		cout << ans << endl;

		for(int i=0; i<5001; i++) a[i] = 0;
	}

	return 0;
}