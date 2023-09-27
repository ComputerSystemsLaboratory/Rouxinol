#include<iostream>
#include<algorithm>
using namespace std;
struct Card{
    char mark;
    int number;
};
struct Card A[100001],B[100001];
int n,v; char c;
void merge(struct Card A[],int left,int mid,int right){
    int n1=mid-left,n2=right-mid; 
    struct Card L[50001],R[50001];
     for(int i=0;i<n1;i++)L[i]= A[left+i];
     for(int i=0;i<n2;i++)R[i]=A[mid+i];
     L[n1].number=R[n2].number=2000000000;
     int i=0,j=0;
     for(int k=left;k<right;k++){
         if(L[i].number<=R[j].number){A[k]=L[i++];}
         else{ A[k]=R[j++];}
     }
}
void mergeSort(struct Card A[],int left,int right){
    int mid;
    if(left+1<right){
        mid=(left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
}
int partition(struct Card A[],int p,int r){
    struct Card x=A[r]; int i=p-1;
    for(int j=p;j<r;j++){
        if(A[j].number<=x.number){
            i++;
            swap(A[i],A[j]);
        }
    }
   swap(A[i+1],A[r]);
    return i+1;
}
void quicksort(struct Card A[],int p,int r){
    if(p<r){
        int q=partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}
int main(){
    bool equal=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c>>v;
        A[i].mark=B[i].mark=c;
        A[i].number=B[i].number=v;
    }
    mergeSort(B,0,n);
    quicksort(A,0,n-1);
    for(int i=0;i<n;i++){
        if(A[i].mark!=B[i].mark) equal=false;
    }
    if(equal) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    for(int i=0;i<n;i++) cout<<A[i].mark<<" "<<A[i].number<<endl;
    return 0;
}
