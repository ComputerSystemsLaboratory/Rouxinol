#include <iostream>
#include <algorithm>
#include <stdio.h>

const int Max = 1000;

void view(int A[],int N){
	std::cout<<A[0];
	for(int i=1;i < N;i++){
		std::cout<<" "<<A[i];
	}
	std::cout << std::endl;
}

void insertion_sort(int A[],int N){
	//int v,j;
	for(int i=1;i<N;i++){
		int v = A[i];
		int j = i - 1;
		while(j >= 0 && A[j] > v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		view(A,N);
	}
}


int main(){
	int N,R[Max];

	std::cin>>N;
	for(int i=0;i<N;i++)
		scanf("%d",&R[i]);

	view(R,N);	
	insertion_sort(R,N);

	return 0;
}