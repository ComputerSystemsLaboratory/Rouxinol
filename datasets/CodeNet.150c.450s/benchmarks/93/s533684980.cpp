#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

#define NMAX 100000
#define SENTINEL 1000000001

int Partition(int A[],char B[],int p,int r){
    int x=A[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++){
        if(A[j]<=x){
            i++;
            swap(A[i],A[j]);
            swap(B[i],B[j]);
        }
    }
    swap(A[i+1],A[r]);
    swap(B[i+1],B[r]);
    return i+1;
}
 
void Quicksort(int A[],char B[],int p,int r){
    if(p<r){
        int q=Partition(A,B,p,r);
        Quicksort(A,B,p,q-1);
        Quicksort(A,B,q+1,r);
    }
    return;
}

void merge(int A[],char B[],int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;
    int L[NMAX],R[NMAX];
	char LL[NMAX],RR[NMAX];

    for(int i=0;i<=n1-1;i++){
        L[i]=A[left+i];
		LL[i]=B[left+i];
    }
    for(int i=0;i<=n2-1;i++){
        R[i]=A[mid+i];
		RR[i]=B[mid+i];
    }
    L[n1]=SENTINEL;
    R[n2]=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<=right-1;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
			B[k]=LL[i];
            i++;
        }
        else{
            A[k]=R[j];
			B[k]=RR[j];
            j++;
        }
    }
}
 
void merge_sort(int A[],char B[],int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        merge_sort(A,B,left,mid);
        merge_sort(A,B,mid,right);
        merge(A,B,left,mid,right);
    }
}

int main(void){
    std::ios_base::sync_with_stdio(false);
 
    int n,qA[NMAX],mA[NMAX];
    char qB[NMAX],mB[NMAX];

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>qB[i]>>qA[i];
		mA[i]=qA[i];
		mB[i]=qB[i];
    }

    Quicksort(qA,qB,0,n-1);
	merge_sort(mA,mB,0,n);

	bool f=true;
	for(int i=0;i<n;i++){
		if(qB[i]!=mB[i]){
			f=false;
			break;
		}
	}

	if(f) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    for(int i=0;i<n;i++){
        cout<<qB[i]<<" "<<qA[i]<<endl;
    }

    return 0;
}