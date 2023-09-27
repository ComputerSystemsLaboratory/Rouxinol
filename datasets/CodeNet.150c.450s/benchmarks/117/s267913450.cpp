#include<iostream>
using namespace std;
#define MAX 500000
#define data 2000000000

int LEFT[MAX/2+2],RIGHT[MAX/2+2];
int count;

void merge(int A[],int n,int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	
	for(int i=0; i<n1; i++){
		LEFT[i]=A[left+i];
	}
	for(int i=0; i<n2; i++){
		RIGHT[i]=A[mid+i];
	}
	
	LEFT[n1]=RIGHT[n2]=data;
	int i=0,j=0;//新たにカウント用変数を宣言する
	int k;
	for(k=left; k<right; k++){
		count++;
		if(LEFT[i]<=RIGHT[j]){
			A[k]=LEFT[i++];
		}
		
		else{
			A[k]=RIGHT[j++];
		}
	}
}

void mergesort(int A[],int n,int left,int right){
	if(left+1<right){
		int mid=((left+right)/2);
		mergesort(A,n,left,mid);
		mergesort(A,n,mid,right);
		merge(A,n,left,mid,right);
	}
}

int main(){
	int A[MAX],n,i;
	count=0;
	
	cin>>n;
	for(i=0; i<n; i++)
	cin>>A[i];
	
	mergesort(A,n,0,n);
	
	for(i=0; i<n; i++){
		if(i) cout<<" ";//iが非ゼロであれば空白を、そうでなければA[i]をcoutする。
		cout<<A[i];
	}
	cout<<endl;
	
	cout<<count<<endl;
	
	return 0;
	}
