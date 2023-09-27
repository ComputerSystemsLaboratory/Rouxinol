#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a;
	int n;
	while(true){
		int sum=0;
		int minimum=1000,maximum=0;
		cin >> n;
		if(n==0) break;
		for(int i=0;i<n;i++){
			cin >> a;
			sum+=a;
			maximum=max(maximum,a);
			minimum=min(minimum,a);
		}
		cout << (sum-maximum-minimum)/(n-2) << endl;
	}	
	return 0;
}