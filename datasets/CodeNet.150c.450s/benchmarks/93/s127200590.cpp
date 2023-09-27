#include<iostream>
#include<algorithm>
using namespace std;
const int MAX=100005;
struct Card{
	int value;char color;
} temp1[MAX/2],temp2[MAX/2],A[MAX],B[MAX];
void merge(Card A[],int left,int right){
	int mid=left+(right-left)/2;
	int len1=mid-left,len2=right-mid;
	for(int i=0;i<len1;i++)temp1[i]=A[left+i];
	for(int i=0;i<len2;i++)temp2[i]=A[mid+i];
	int i=0,j=0,k=left;
	while(i<len1&&j<len2){
		if(temp1[i].value>temp2[j].value){
			A[k++]=temp2[j++];
		}else{
			A[k++]=temp1[i++];
		}
	}
	while(i<len1)A[k++]=temp1[i++];
	while(j<len2)A[k++]=temp2[j++];
}
void MergeSort(Card A[],int left,int right){
	if(right==left+1)return;
	if(left<right){
		int mid=left+(right-left)/2;
		MergeSort(A,left,mid);
		MergeSort(A,mid,right);
		merge(A,left,right);
	}
}
int partition(Card A[],int left,int right){
	int x=A[right].value;
	int i=left-1,j;
	for(j=left;j<right;j++){
		if(A[j].value<=x){
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[j]);
	return i+1;
}
void QuickSort(Card A[],int left,int right){
	if(left<right){
		int q=partition(A,left,right);
		QuickSort(A,left,q-1);
		QuickSort(A,q+1,right);
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i].color>>A[i].value;
		B[i].color=A[i].color;
		B[i].value=A[i].value;
	}
	MergeSort(A,0,n);
	QuickSort(B,0,n-1);
	bool isstable=true;
	for(int i=0;i<n;i++){
		if(A[i].color!=B[i].color||A[i].value!=B[i].value){
			isstable=false;
			break;
		}
	}
	cout<<(isstable?"Stable":"Not stable")<<endl;
	for(int i=0;i<n;i++){
		cout<<B[i].color<<" "<<B[i].value<<endl;
	}
	return 0;
}
