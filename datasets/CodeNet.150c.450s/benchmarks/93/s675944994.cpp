#include <cstdio>
#include <algorithm>
#define MAX 100000
#define INF 2e9

struct Card{
	char suit;
	int val;
};

Card L[MAX/2+2],R[MAX/2+2];

void merge(Card A[],int n,int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	int i,j;
	for(int i=0;i<n1;i++){
		L[i]=A[left+i];
	}
	for(int i=0;i<n2;i++){
		R[i]=A[mid+i];
	}
	L[n1].val=R[n2].val=INF;
	i=j=0;
	for(int k=left;k<right;k++){
		if(L[i].val<=R[j].val){
			A[k]=L[i++];
		}else{
			A[k]=R[j++];
		}
	}
}

void mergeSort(Card A[],int n,int left,int right){
	int mid;
	if(left+1<right){
		mid=(left+right)/2;
		mergeSort(A,n,left,mid);
		mergeSort(A,n,mid,right);
		merge(A,n,left,mid,right);
	}
}

int partition(Card A[],int n,int p,int r){
	Card x=A[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(A[j].val<=x.val){
			i++;
			std::swap(A[i],A[j]);
		}
	}
	std::swap(A[r],A[i+1]);
	return i+1;
}

void quickSort(Card A[],int n,int p,int r){
	if(p<r){
		int q=partition(A,n,p,r);
		quickSort(A,n,p,q-1);
		quickSort(A,n,q+1,r);
	}
}

int main(void){
	int n,v;
	Card A[MAX],B[MAX];
	char S[10];
	bool flag=true;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d",S,&v);
		A[i].suit=B[i].suit=S[0];
		A[i].val=B[i].val=v;
	}
	mergeSort(A,n,0,n);
	quickSort(B,n,0,n-1);
	for(int i=0;i<n;i++){
		if(A[i].suit!=B[i].suit)flag=false;
	}
	printf("%s\n",flag?"Stable":"Not stable");
	for(int i=0;i<n;i++){
		printf("%c %d\n",B[i].suit,B[i].val);
	}
	return 0;
}