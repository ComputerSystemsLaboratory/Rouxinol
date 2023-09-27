#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define ll long long
#define sent 2000000000
#define MAX 500000



using namespace std;

struct Card {
    char str;
    int num;
};

Card L[MAX/2+2],R[MAX/2+2];

int partition(Card A[],int p,int r){
    int x=A[r].num;
    int i=p-1;
    for (int j=p;j<r;j++){
        if(A[j].num<=x){
            i++;
            swap(A[i],A[j]);
        }
    } 
    swap(A[i+1],A[r]);
    return i+1;
}

void quickSort(Card A[],int p,int r){
    if (p<r){
        int q=partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}

void merge(Card A[],int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;

    rep(i,n1) L[i]=A[left+i];
    rep(i,n2) R[i]=A[mid+i];

    L[n1].num=R[n2].num=sent;

    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(L[i].num<=R[j].num){
            A[k]=L[i++];
        }else{
            A[k]=R[j++];
        }
    }

}

void mergeSort(Card A[],int left,int right){
    if (left+1<right){
        int mid=(left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }

}

int main(){
    int n;
    cin>>n;
    Card A[n],B[n];
    
    rep(i,n){
        cin>>A[i].str;
        cin>>A[i].num;
        B[i]=A[i];
    }
    
    mergeSort(B,0,n);
    quickSort(A,0,n-1);
    
    int stable=1;

    rep(i,n) if(A[i].str !=B[i].str) stable=0;

    if (stable) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    rep(i,n){
        cout<<A[i].str<<" "<<A[i].num<<endl;
    }
    return 0;
}
