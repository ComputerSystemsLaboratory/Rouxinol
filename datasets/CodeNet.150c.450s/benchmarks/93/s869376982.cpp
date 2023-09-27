#include <bits/stdc++.h>
using namespace std;
#define BMAX 50005
#define INFI 2100000000
struct card{
    int value;
    char suit;
};

card L[BMAX], R[BMAX];
void swap(card *a, card *b){
    card tem = *b;
    *b = *a;
    *a = tem;
}

int Partition(card S[], int left, int right){
    int i=left-1,j=left;
    for(j;j<right;++j){
        if(S[j].value<=S[right].value){
            i++;
            swap(&S[i],&S[j]);
        }
    }
    swap(&S[i+1],&S[right]);
    return (i+1);
}

void quickSort(card S[], int left, int right){
    if(left<right){
        int pos = Partition(S,left,right);
        quickSort(S,left,pos-1);
        quickSort(S,pos+1,right);
    }
}

void Merge(card M[], int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right-mid;
    for(int i=0;i<n1;i++){
        L[i] = M[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = M[mid+i];
    }
    L[n1].value = INFI;
    R[n2].value = INFI;
    int i=0,j=0;
    for(int k=0;k<n1+n2;++k){
        if(L[i].value<=R[j].value){
            M[left+k].value = L[i].value;
            M[left+k].suit = L[i].suit;
            i++;
        }
        else{
            M[left+k].value = R[j].value;
            M[left+k].suit = R[j].suit;
            j++;
        }
    }
}

void MergeSort(card M[], int left, int right){
    if(left+1 < right){
        int mid = (left+right)/2;
        MergeSort(M,left,mid);
        MergeSort(M,mid,right);
        Merge(M,left,mid,right);
    }
}



int main(){
    int n;
    scanf("%d",&n);
    card S[100001],M[100001];
    int value;
    char suit[10];
    for(int i=0;i<n;++i){
        scanf("%s %d",suit,&value);
        M[i].suit = S[i].suit = suit[0];
        M[i].value = S[i].value = value;
    }
    quickSort(S,0,n-1);
    MergeSort(M,0,n);
    int stable = 1;
    for(int i=0;i<n;++i){
        if(S[i].suit != M[i].suit || S[i].value != M[i].value) stable = 0;
    }
    if(stable) printf("Stable\n");
    else printf("Not stable\n");
    for(int i=0;i<n;++i){
        printf("%c %d\n",S[i].suit,S[i].value);
    }
    return 0;
}


