#include <iostream>
#define    N    101
using namespace std;

void swap(int *x, int *y){
	int z = *x;
	*x = *y;
	*y = z;
}

int bubbleSort(int *A, int n){
	int count = 0, flag = 1;
	
	while(flag){
		flag = 0;
		for(int j=n-1;j>0;j--){
			if(A[j] < A[j-1]){
				swap(A[j], A[j-1]);
				count++;
				flag = 1;
			}
		}
	}

	return count;
}

int main(){
	int n, A[N], change;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	change = bubbleSort(A, n);
	
	for(int i=0;i<n;i++){
		if(i!=0) cout<<" ";
		cout<<A[i];
	}
	cout<<endl<<change<<endl;

	return 0;
}