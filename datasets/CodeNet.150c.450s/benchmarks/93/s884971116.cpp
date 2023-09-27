#include<iostream>
#include<string>
#define N 100003
#define MAX 2000000000

using namespace std;

struct card{
    char c;
    int d;
};
int n;
card L[N/2+2],R[N/2+2];

void QuickSort(card A[],int head,int tail){
    card x=A[tail];
    int i=head-1,j=head;
    card temp;
    if(head>=tail) return;  //!(tail-head>1) 改了
    for(j=head;j<tail;j++){
        if(A[j].d<=x.d){
            i++;
            temp=A[j]; A[j]=A[i]; A[i]=temp;
        }
    }
    A[tail]=A[i+1]; A[i+1]=x;
    QuickSort(A,head,i);
    QuickSort(A,i+2,tail);
}

void Merge(card B[],int left,int mid,int right){
    int n1=mid-left,n2=right-mid;
    int i,j;
    for(i=0;i<n1;i++) L[i]=B[left+i];
    for(i=0;i<n2;i++) R[i]=B[mid+i];
    L[n1].d=R[n2].d=MAX;

    i=j=0;
    for(int k=left;k<right;k++){
        if(L[i].d<=R[j].d){
            B[k]=L[i++];
        }else{
            B[k]=R[j++];
        }
    }
}
void MergeSort(card B[],int left,int right){
    int mid=0;
    if(left+1<right){
        mid=left+(right-left)/2;
        MergeSort(B,left,mid);
        MergeSort(B,mid,right);
        Merge(B,left,mid,right);
    }
}
void show(card A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i].c<<' '<<A[i].d<<endl;
    }
}
void compare(card A[],card B[],int n){
    for(int i=0;i<n;i++){
        if(A[i].c!=B[i].c){
            cout<<"Not stable"<<endl;
            return;
        }
    }
    cout<<"Stable"<<endl;
    return;
}
int main(){
    string tc;
    int td;
    card A[N],B[N];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tc>>td;
        A[i].c=B[i].c=tc[0];
        A[i].d=B[i].d=td;
    }

    QuickSort(A,0,n-1);
    MergeSort(B,0,n);

    compare(A,B,n);
    show(A,n);
    return 0;
}

