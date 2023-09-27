#include<iostream>
#define MAX 100000
#define SENTINEL 2000000000

struct Card{char suit;int value; };
struct Card L[MAX/2+2],R[MAX/2+2];

void merge(struct Card A[],int left,int right,int mid){
    for(int i=0;i<mid-left;i++) L[i] = A[left+i];
    for(int i=0;i<right-mid;i++) R[i] = A[mid+i];
    L[mid-left].value=SENTINEL;R[right-mid].value=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(L[i].value <= R[j].value){
            A[k]=L[i++];
        }else{
            A[k]=R[j++];
        }
    }
}

void mergeSort(struct Card A[],int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,right,mid);
    }
}

int partition(struct Card A[],int p,int r){
    int a=p;
    struct Card t;
    int x=A[r].value;
    for(int i=p;i<=r;i++){
        if(A[i].value<=x){
            t=A[a];
            A[a] = A[i];
            A[i]=t;
            a++;
        }
    }
    if(a==0)printf("AAA");
    return a-1;
}

void quickSort(struct Card A[],int p,int r){
    if(p<r){
        int q = partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}

int main(){
    int n,v;
    int stable=1;
    struct Card A[MAX],B[MAX];
    char S[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d",S,&v);
        A[i].suit = S[0];
        B[i].suit = S[0];
        A[i].value = v;
        B[i].value = v;
    }
    mergeSort(A,0,n);
    quickSort(B,0,n-1);

    for(int i=0;i<n;i++){
        if(A[i].suit != B[i].suit){
            stable=0;
            break;
        }
    }

    printf((stable?"Stable\n":"Not stable\n"));
    for(int i=0;i<n;i++){
        printf("%c %d\n",B[i].suit,B[i].value);
    }
    return 0;
}

