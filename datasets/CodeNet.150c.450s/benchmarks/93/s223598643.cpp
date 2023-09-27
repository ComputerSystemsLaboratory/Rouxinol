#include<stdio.h>
#include<algorithm>
using namespace std;
#define INFTY 2000000000
struct Card{
    char mark;
    int value;
};

Card L[100000/2+2], R[100000/2+2];

void merge(Card* A, int left, int mid, int right){

    int n1 = mid - left;
    int n2 = right - mid;
    for(int i=0; i<n1; i++) L[i] = A[left + i];
    for(int i=0; i<n2; i++) R[i] = A[mid + i];
    L[n1].value = R[n2].value = INFTY;
    int i=0; int j = 0;
    for(int k=left; k<right; k++){
        if(L[i].value <= R[j].value){
            A[k] = L[i++];
        }
        else{
            A[k] = R[j++];
        }
    }
}

void mergeSort(Card* A, int left, int right){
    int mid;
    if(left + 1<right){
        mid = (left + right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }

}

int partition(Card* A, int p, int r){
    int x = A[r].value;
    int i=p-1;
    for(int j=p; j<r; j++){
        if(A[j].value <= x){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}

void quickSort(Card* A, int p, int r){
    int q;
    if(p<r){
        q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

int main(){

    int n;
    scanf("%d", &n);
    Card A[100000], B[100000];
    char S[10];
    for(int i=0; i<n; i++){
        int x;
        scanf("%s %d", S, &x);
        A[i].mark = B[i].mark =  S[0];
        A[i].value = B[i].value = x;
    }

    mergeSort(A, 0, n);
    quickSort(B, 0, n-1);

    int flag = 0;
    for(int i=0; i<n; i++){
        if(A[i].mark != B[i].mark) flag = 1;
    }

    if(flag==1) printf("Not stable\n");
    else printf("Stable\n");
    for(int i=0; i<n; i++){
        printf("%c %d\n", B[i].mark, B[i].value);
    }
    return 0;

}
