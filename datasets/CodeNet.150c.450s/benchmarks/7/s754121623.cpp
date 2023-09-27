#include <iostream>
using namespace std;

template <typename T> void b_sort(T* a , int n){
	int i , j;
	for(i=n;i>=0;i--){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				a[j]^=a[j+1];
				a[j+1]^=a[j];
				a[j]^=a[j+1];
			}
		}
	}	
} 

int main(){
	unsigned int m[10];
	for(int i=0;i<10;++i){
		cin >> m[i];
	}
	b_sort(m , 10);
	cout << m[9] << "\n" << m[8] << "\n" << m[7] << endl;
	return 0;
}