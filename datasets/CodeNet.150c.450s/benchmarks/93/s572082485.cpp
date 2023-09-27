#include <bits/stdc++.h>
#define INF 1e10
using namespace std;
struct Card{
	char c;int v;
} A[100000],B[100000];

int partition(int p,int r){
	int x=A[r].v,i=p-1;
	for(int j=p;j<r;j++)
		if(A[j].v<=x) swap(A[++i],A[j]);
	swap(A[i+1],A[r]);
	return i+1;
}
void quickSort(int p,int r){
	if(p<r){
		int q = partition(p,r);
		quickSort(p,q-1);
		quickSort(q+1,r);
	}
}

void merge(int left,int mid,int right){
	int n1=mid-left,n2=right-mid;
	Card L[n1+1],R[n2+1];
	for(int i=0;i<n1;i++) L[i] = B[left+i];
	for(int i=0;i<n2;i++) R[i] = B[mid+i];
	L[n1].v = R[n2].v = INF;
	int i=0,j=0;
	for(int k=left;k<right;k++)
		if(L[i].v<=R[j].v) B[k] = L[i++];
		else B[k] = R[j++];
}
void mergeSort(int left,int right){
	if(left+1<right){
		int mid=(left+right)/2;
		mergeSort(left,mid);
		mergeSort(mid,right);
		merge(left,mid,right);
	}
}

bool judge(int n){
	for(int i=0;i<n;i++)
		if(A[i].c!=B[i].c) return 0;
	return 1;
}
int main()
{
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i].c>>A[i].v;
		B[i].c = A[i].c;
		B[i].v = A[i].v;
	}
	quickSort(0,n-1);
	mergeSort(0,n);
	if(judge(n)) cout<<"Stable\n";
	else cout<<"Not stable\n";
	for(int i=0;i<n;i++)	
		printf("%c %d\n",A[i].c,A[i].v);
}
