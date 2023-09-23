#include <iostream>

int partition(int *A, int p, int r){
	int i,j,x,temp;
	x = A[r];
	i = p-1;
	for(j=p;j<r;j++){
		if(A[j] <= x){
			i++;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	temp = A[i+1];
	A[i+1] = x;
	A[r]=temp;
	return i+1;
}

int main(void){
	int i,n,q;
	int *A;

	std::cin >> n;
	
	A = new int[n];
	for(i=0;i<n;i++){
		std::cin >> A[i];
	}
	q = partition(A, 0, n-1);
	for(i=0;i<n-1;i++){
		if(i==q){
			std::cout << "[" << A[i] << "] ";
		}
		else{
			std::cout << A[i] << " ";
		}
	}
	std::cout << A[i] << std::endl;
	
	delete A;
	return 0;
}