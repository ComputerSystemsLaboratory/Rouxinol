#include <iostream>
using namespace std;

void b_sort(long long int* a , int n){
	for(int i=0 ; i < n ; ++i){
		for(int j=i+1 ; j < n ; ++j){
			if(a[i]>a[j]){
				a[i]^=a[j];
				a[j]^=a[i];
				a[i]^=a[j];
			}
		}
	}
}

int main(){
	int n;
	long long int sum=0;
	cin >> n;
	long long int a[100000]={0};
	for(int i=0 ; i<n ; ++i){
		cin >> a[i];
	}
	b_sort(a , n);
	
	for(int i=0 ; i<n ; ++i){
		sum+=a[i];
	}
	cout << a[0] << " " << a[n-1] << " " << sum << endl;
	return 0;
}