#include <iostream>

using namespace std;

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void babbleSort(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]>=a[j-1]){
				swap(&a[j],&a[j-1]);
			}
		}
	}
}

int main(){

	int n;

	while(cin>>n){
		if(n==0)break;
		int *a;
		a = new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		babbleSort(a,n);
		int sum=0;
		for(int i=1;i<n-1;i++){
			sum+=a[i];
		}
		cout<<sum/(n-2)<<endl;
	}

	return 0;
}