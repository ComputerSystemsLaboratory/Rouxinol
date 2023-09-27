#include <stdio.h>

#define N 100000000
#define inf 2147483647

int S[N],L[N/2],R[N/2];
int n,count = 0;
int l=0;

void merge(int left,int mid,int right){
	l++;
	int n1 = mid - left;
	int n2 = right - mid;
	int i;
	for(i=0;i<n1;i++){
		L[i] = S[left + i];
	}
	for(i=0;i<n2;i++){
		R[i] = S[mid+i];
	}
	L[n1] = inf;
	R[n2] = inf;
	int j=0;
	i = 0;
	int k;
	for(k=left;k<right;k++){
		count++;
		if(L[i] <= R[j])S[k] = L[i++];
		else if(L[i] > R[j])S[k] = R[j++]; 
	}
}	

void mergesort(int left,int right){
	if(left+1 < right){
		int mid = (right + left) / 2;
		mergesort(left,mid);
		mergesort(mid,right);
		merge(left,mid,right);
	}
}	

int main(){
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&S[i]);
	}
	mergesort(0,n);
	for(i=0;i<n-1;i++){
		printf("%d ",S[i]);
	}
	printf("%d\n%d\n",S[i],count);
}