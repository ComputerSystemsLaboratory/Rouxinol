#include<stdio.h>
#define maxArr 200009

int temp[maxArr];
int Arr[maxArr];
long long count=0;

void mergeSort(int l, int r){
	if(l>=r) return;
	int mid =(l+r)/2;

	mergeSort(l, mid);
	mergeSort(mid+1, r);
	
	int left=l;
	int toLeft=mid;
	int right=mid+1;
	int toRight=r;
	int tempIdx=l;
	
	while(left<=toLeft && right<=toRight){
		if(Arr[left]<=Arr[right]){
			temp[tempIdx++]=Arr[left++];
		}
		else{
			temp[tempIdx++]=Arr[right++];
			count+=(mid+1)-left;
		}
	}
	while(left<=toLeft){
		temp[tempIdx++]=Arr[left++];
	}
	while(right<=toRight){
		temp[tempIdx++]=Arr[right++];
	}
	for(int i=l;i<=r;i++){
		Arr[i]=temp[i];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	count=0;
	
	for(int i=0;i<n;i++){
		scanf("%d", &Arr[i]);	
	}
	
	mergeSort(0,n-1);
	printf("%lld\n", count);
	
	return 0;
}
