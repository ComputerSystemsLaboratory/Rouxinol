#include <iostream>
#define    N    101
using namespace std;

void swap(int *x, int *y){
	int z = *x;
	*x = *y;
	*y = z;
}

int selectionSort(int *A, int n){
	int count = 0;
	for(int i=0;i<n;i++){
		int minj = i;
		for(int j = i;j<n;j++)
			if(A[j] < A[minj])
				minj = j;
		if(i != minj){
			swap(A[i], A[minj]);
			count++;
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
	
	change = selectionSort(A, n);
	
	for(int i=0;i<n;i++){
		if(i!=0) cout<<" ";
		cout<<A[i];
	}
	cout<<endl<<change<<endl;

	return 0;
}