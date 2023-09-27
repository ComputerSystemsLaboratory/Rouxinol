#include <iostream>
using namespace std;

int main(){
	int n;
	while(1){
		int a[100]={0};
		int sum=0;
		cin>>n;
		if(n==0) break;
		for(int i=0 ; i<n ; i++){
			cin >> a[i] ;
		}
		for(int i=n-1 ; i>=0 ; i--){
			for(int j=0 ; j< i ; j++){
				if(a[j]>a[j+1]){
					a[j]^=a[j+1];
					a[j+1]^=a[j];
					a[j]^=a[j+1];
				}
			}
		}
		for(int i=1 ; i<n-1 ; i++){
			sum+=a[i];
		}
			cout << sum/(n-2) << endl;
	}
	return 0;
}