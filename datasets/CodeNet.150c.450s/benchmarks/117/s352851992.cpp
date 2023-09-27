#include<iostream>
#include<climits>
void merge(int A[],int left,int mid,int right,int& count){
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1+1], R[n2+1];
	for (int i=0;i<n1;i++){
		L[i] = A[left + i];
	}
	for (int i=0;i<n2;i++){
		R[i] = A[mid + i];
	}
	L[n1]=INT_MAX;
	R[n2]=INT_MAX;
	int i=0,j=0;
	for(int k=left;k<right;k++){
		if(L[i]<=R[j]){
			A[k] = L[i];
			i = i+1;
		}else{
			A[k] = R[j];
			j = j+1;
		}
		count++;
	}
}
void mergeSort(int A[],int left,int right,int& count){
	if(left+1<right){
	    int mid = (left + right)/2;
	    mergeSort(A, left, mid,count);
	    mergeSort(A, mid, right,count);
	    merge(A, left, mid, right,count);
	}
}

int main(){
	
	int n;
	std::cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		std::cin>>A[i];
	}
	int count=0;
	
	mergeSort(A,0,n,count);
	
	for(int i=0;i<n;i++){
		std::cout<<A[i];
		if(i!=n-1){
			std::cout<<" ";
		}else{
			std::cout<<"\n";
		}
	}
	
	std::cout<<count<<"\n";
	
	return 0;
}


