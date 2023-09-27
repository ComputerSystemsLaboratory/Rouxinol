#include <bits/stdc++.h>
using namespace std;
#define INFTY 1000000001

struct card{
    char suit;
    int value;    
};

void merge(vector<card> &A,int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;
    vector<card> L(n1+1);
    vector<card> R(n2+1);
    for(int i=0;i<n1;i++){
        L[i]=A[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=A[mid+i];
    }
    L[n1].value=R[n2].value=INFTY;
    
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(L[i].value<=R[j].value){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
    }
}

void mergeSort(vector<card> &A,int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
}


int partition(vector<card> &A,int p,int r){
    int x=A[r].value;
    int i=p-1;
    for(int j=p;j<r;j++){
        if(A[j].value<=x){
            i=i+1;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

void quickSort(vector<card> &A,int p,int r){
    if(p<r){
        int q=partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}



int main(){
    int n;
    cin>>n;
    vector<card> A(n),B(n);
    for(int i=0;i<n;i++){
        cin>>A[i].suit>>A[i].value;
    }

    B=A;
    quickSort(A,0,n-1);
    mergeSort(B,0,n);

    bool judge=true;
    for(int i=0;i<n;i++){
        if(A[i].suit!=B[i].suit||A[i].value!=B[i].value) judge=false;
    }

    if(judge) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;

    for(int i=0;i<n;i++){
        cout<<A[i].suit<<' '<<A[i].value<<endl;
    }      
}
