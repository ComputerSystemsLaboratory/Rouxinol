#include <iostream>
#include <vector>
using namespace std;

void i_sort(vector<int>a , int n ){
	int i , j;
	for(i=0; i<n ; ++i){
		for(j=0; j<i ; ++j){
			if(a[j]>a[i]){
				a[j]^=a[i];
				a[i]^=a[j];
				a[j]^=a[i];
			}
		}
		for(int k=0; k<n-1 ; ++k){
				cout << a[k] << " ";
			}
			cout << a[n-1] <<endl;
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0 ; i<n ; ++i){
		cin >> a[i];
	}
	i_sort(a,n);
	return 0;
}