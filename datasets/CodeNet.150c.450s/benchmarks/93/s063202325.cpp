#include <iostream>
#include <cstdio>
using namespace std;
#define MAX (100000)
#define SENTINEL (2000000000)
struct Card{
    char suit;
    int num;
};

struct Card L[MAX/2+2],R[MAX/2+2];

void merge(struct Card A[],int n,int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++)L[i]=A[left+i];
    for(int i=0;i<n2;i++)R[i]=A[mid+i];
    L[n1].num=SENTINEL;
    R[n2].num=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(L[i].num<=R[j].num){
            A[k]=L[i];
            i++;
        }else{
            A[k]=R[j];
            j++;
        }
    }
}

void mergesort(struct Card A[],int n,int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergesort(A,n,left,mid);
        mergesort(A,n,mid,right);
        merge(A,n,left,mid,right);
    }
}

int partition(struct Card A[], int n, int p,int r){
    int i,j;
    struct Card t,x;
    x=A[r];
    i=p-1;
    for(j=p;j<r;j++){
        if(A[j].num<=x.num){
            i++;
            t=A[i];A[i]=A[j];A[j]=t;
        }
    }
    t=A[i+1];A[i+1]=A[r];A[r]=t;
    return i+1;
}

void quicksort(struct Card A[], int n, int p,int r){
    int q;
    if(p<r){
        q=partition(A,n,p,r);
        quicksort(A,n,p,q-1);
        quicksort(A,n,q+1,r);
    }
}

int main(void){
    int n,v,i;
    struct Card A[MAX],B[MAX];
    char S[10];
    int stable=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d",S,&v);
        A[i].suit=B[i].suit=S[0];
        A[i].num=B[i].num=v;
    }
    mergesort(A,n,0,n);
    quicksort(B,n,0,n-1);
    for(i=0;i<n;i++){
        if(A[i].suit!=B[i].suit)stable=0;
    }
    if(stable)printf("Stable\n");
    else printf("Not stable\n");
    for(i=0;i<n;i++){
        printf("%c %d\n",B[i].suit,B[i].num);
    }
    return 0;
}
