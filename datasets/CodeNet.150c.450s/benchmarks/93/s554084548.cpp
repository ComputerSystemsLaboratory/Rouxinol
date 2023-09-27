#include <iostream>
using namespace std;

struct card{
   char suit;
   int value;
};

const int SENTINEL=2000000000;
int cnt=0;
void merge(card A[],int n,int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	card *L=new card[n1+1];
	card *R=new card[n2+1];
	for(int i=0;i<n1;++i) L[i]=A[left+i];
	for(int i=0;i<n2;++i) R[i]=A[mid+i];
	L[n1].value=R[n2].value=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++){
    	cnt++;
    	if(L[i].value<=R[j].value)A[k]=L[i++];
    	else A[k]=R[j++];
    }
    delete L;
    delete R;

}
void mergeSort(card A[],int n,int left,int right){
   if(left+1<right){
   		int mid=(left+right)/2;
   		mergeSort(A,n,left,mid);
   		mergeSort(A,n,mid,right);
   		merge(A,n,left,mid,right);
   }
}

int  partition(card A[],int n,int p,int r){
	int i=p;
	card x=A[r];
	for(int j=p;j<r;j++){
		if(A[j].value<=x.value){
			
			card t=A[j];
			A[j]=A[i];
			A[i]=t;
			++i;
		}
	}
	A[r]=A[i];
	A[i]=x;

	return i;
}
void quickSort(card A[],int n,int p,int r){
	if(p<r){
		int q=partition(A,n,p,r);
		quickSort(A,n,p,q-1);
		quickSort(A,n,q+1,r);
	}
}

int main(){
	int n;
	cin>>n;
	card *A=new card[n];
	card *B=new card[n];

	for(int i=0;i<n;i++){
		cin>>A[i].suit>>A[i].value;
		B[i]=A[i];
    }
    
    quickSort(A,n,0,n-1);
    mergeSort(B,n,0,n);
    int stable=1;
    for(int i=0;i<n;i++){
    	if(A[i].suit != B[i].suit ) {
    		stable=0;break;
    	}
    }

    if(stable==1)cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;

    for(int i=0;i<n;i++){
       	cout<<A[i].suit<<" "<<A[i].value<<endl;
    }

    

    return 0;
}
