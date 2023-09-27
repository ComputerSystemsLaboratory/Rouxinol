#include <iostream>
#define MAX 1000000001
using namespace std;
struct Card{
    char suit;
    int value;
};

void merge(Card A[],int left,int mid,int right){
    Card L[mid-left+1],R[right-mid+1];
    for(int i=0;i<mid-left;i++)
        L[i]=A[left+i];
    L[mid-left].value=MAX;
    for(int i=0;i<right-mid;i++)
        R[i]=A[mid+i];
    R[right-mid].value=MAX;
    int L_index=0,R_index=0;
    for(int i=left;i<right;i++){
        if(L[L_index].value<=R[R_index].value){
            A[i]=L[L_index++];
        }
        else
            A[i]=R[R_index++];
    }
}
void mergeSort(Card A[],int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
}
int partition(Card A[],int p,int r){
    int i=p-1;
    Card x=A[r],temp;
    for(int j=p;j<r;j++)
        if(A[j].value<=x.value){
            i++;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    A[r]=A[i+1];
    A[i+1]=x;
    return i+1;
}
void quickSort(Card A[],int p,int r){
    if(p<r){
        int q = partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}
int main(){
    int n,j;
    Card A[100000],B[100000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i].suit>>A[i].value;
    for(int i=0;i<n;i++)
        B[i]=A[i];
    quickSort(A,0,n-1);
    mergeSort(B,0,n);
    for(j=0;j<n;j++)
        if(A[j].suit!=B[j].suit){
            cout<<"Not stable"<<endl;
            break;
        }
    if(j==n)
        cout<<"Stable"<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i].suit<<' '<<A[i].value<<endl;
    return 0;
}
