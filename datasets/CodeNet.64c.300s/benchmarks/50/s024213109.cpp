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

int Bubble_sort(int A[],int N){
	int sw=0;
	bool flag=true;
	for(int i=0;flag;++i){
		flag=false;
		for(int j=N-1;j >= i+1;j--){
			if(A[j]<A[j-1]){
				std::swap(A[j],A[j-1]);
				++sw;
				flag=true;
			}
		}
	}
	return sw;
}


int main(){
	int N,R[Max];
	
	std::cin>>N;
	for(int i=0;i<N;i++)
		scanf("%d",&R[i]);

	int sw = Bubble_sort(R,N);
	view(R,N);
	std::cout<<sw<<std::endl;

	return 0;
}