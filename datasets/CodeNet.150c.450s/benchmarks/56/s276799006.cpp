#include <iostream>
using namespace std;

int main(){
	int n;
	long long int sum=0;
	long long int a[10000]={0};
	cin >> n;
	for(int i=0 ; i<n ; i++){
		cin >> a[i] ;
	}
	for(int i=n-1 ; i>=0 ; i--){
		for (int j=0 ; j<i ; j++){
			if(a[j]>a[j+1]){
				a[j]^=a[j+1];
				a[j+1]^=a[j];
				a[j]^=a[j+1];
			}
		}
	}
	for(int i=0 ; i<n ; i++){
		sum+=a[i];
	}
	cout << a[0] << " " << a[n-1] << " " << sum << endl;
	return 0;
}