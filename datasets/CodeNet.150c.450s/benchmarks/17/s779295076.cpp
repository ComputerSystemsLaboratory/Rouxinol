/*AOJ 0018*/

#include<iostream>
using namespace std;

#define N 5

void Swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void BabbleSort(int *a){
	for(int i=0;i<N;i++){
		for(int j=N-1;j>i;j--){
			if(a[j] >= a[j-1]){
				Swap(&a[j],&a[j-1]);
			}
		}
	}
}


int main(){

	int a[N];

	for(int i=0;i<N;i++){
		cin>>a[i];
	}

	BabbleSort(a);

	for(int i=0;i<N-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[4]);
	return 0;
}