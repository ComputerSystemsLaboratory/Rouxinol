#include<iostream>
#include<cstdio>
using namespace std;
const int maxn = 500000;
const int INFTY  = 1000000010;
int cnt = 0;
int L[maxn/2 + 2],R[maxn/2 + 2];
void Merge(int *A,int left,int mid,int right)//归并 
{
	int n1 = mid - left;
	int n2 = right - mid;
	for(int i = 0;i < n1;i++){
		L[i] = A[left + i];
	}
	for(int i = 0;i < n2;i++){
		R[i] = A[mid + i];
	}
	L[n1] = R[n2] = INFTY;
	
	int i = 0,j = 0; 
	for(int k = left;k < right ;k++){
		cnt++;
		if(L[i] <= R[j]){
			A[k] = L[i++];
			//i++;
		}
		else {
			A[k] = R[j++];
			//j++;
		}
	}
}
void Merge_sort(int *A,int left,int right)//归并排序 
{
	if(left < right - 1){
		//int mid = (right - left)/2 + left;
		int mid = (right + left) / 2;
		Merge_sort(A,left,mid);				//分治递归 
		Merge_sort(A,mid,right);		//分治递归 
		Merge(A,left,mid,right);			//归并 
	}
}
int main()
{
	//freopen("guibing1.txt","r",stdin);
	int num = 0;
	int A[maxn];
	scanf("%d",&num);
	for(int i = 0;i < num;i++){
		scanf("%d",&A[i]);
	}
	//int left = 0,right = num;
	Merge_sort(A,0,num);
	for(int i = 0 ;i < num;i++){
		if(i > 0){
			printf(" ");
		}
		printf("%d",A[i]);
	}
	printf("\n");
	printf("%d\n",cnt);
	return 0;
 } 
