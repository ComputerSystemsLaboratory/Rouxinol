#include <iostream>
using namespace std;
#define MAX 2000000
#define Sen 1000000000000
typedef long long llong;
llong Left[MAX/2+2], Right[MAX/2+2], A[MAX+1];

llong merge(llong A[], int n, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	
	for(int i=0; i<n1; i++) Left[i] = A[left+i];
	for(int i=0; i<n2; i++) Right[i] = A[mid+i];
	Left[n1] = Sen; Right[n2] = Sen;
	int i=0, j=0; 
	llong cnt = 0;
	for(int k=left; k<right; k++){
		if(Left[i]<=Right[j]){
			A[k] = Left[i++];
		}
		else {
			A[k] = Right[j++];
			cnt+=n1-i;
		}
	}
	return cnt;
}

llong mergesort(llong A[], int n, int left, int right){
	llong v1, v2, v3;
	if(left+1<right){//这里right所指的是最后一个元素的下一位 left+1 = right 的话说明只有一个元素了
		int mid = (left+right) / 2;
		v1 = mergesort(A, n, left, mid);
		v2 = mergesort(A, n, mid, right);
		v3 = merge(A, n, left, mid, right);
		return v1+v2+v3;
	}else return 0;
	
}

int main(){

	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>A[i];
	}

	llong sum = 0;
	sum = mergesort(A, n, 0, n);
	cout<<sum<<endl;
	return 0;
}
