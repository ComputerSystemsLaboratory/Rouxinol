#include<iostream>
using namespace std;

int merge(int A[],int left,int mid,int right){
	int count=0;
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1+1],R[n2+1];
	for(int i=0;i<n1;i++){
		L[i] = A[left+i];
	}
	for(int i=0;i<n2;i++){
		R[i] = A[mid + i];
	}
	L[n1] = 2147483647;
	R[n2] = 2147483647;
	int i = 0;
	int j = 0;
	for(int k=left;k<right;k++){
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
		count++;
	}
	return count;
}

int mergeSort(int A[],int left,int right){
	int count=0;
	if(left+1 < right){
		int mid = (left + right)/2;
		count += mergeSort(A,left,mid);
		count += mergeSort(A,mid,right);
		count += merge(A,left,mid,right);
	}
	return count;
}

int main(){
	int num=0;
	cin >> num;
	int array[num];
	for(int i=0;i<num;i++){
		cin >> array[i];
	}
	int count = mergeSort(array,0,num);
	for(int i=0;i<num-1;i++){
		cout << array[i] << " ";
	}
	cout << array[num-1] << endl << count << endl;
	return 0;
}
	