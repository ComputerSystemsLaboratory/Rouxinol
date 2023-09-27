#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

#define INF 2000000000
#define MAX 100000

struct Card{
    char suit;
    int value;
};

//MergeSortの実装
Card L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(Card A[], int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    //L[n1],R[n2]を生成
    for(int i = 0; i < n1; i++){
        L[i] = A[left + i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = A[mid + i];
    }
    L[n1].value = INF;
    R[n2].value = INF;

    int i = 0;
    int j = 0;
    for(int k = left; k < right; k++){
        if(L[i].value <= R[j].value){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(Card A[], int left, int right){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}


//QuickSortの実装
int pertition(Card A[], int p, int r){
    Card x = A[r];
    int i = p - 1;
    for(int j = p; j < r; j++){
        if(A[j].value <= x.value){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);

    return i + 1;
}

void quickSort(Card A[], int p, int r){
    if(p < r){
        int q = pertition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}


int main(){
    int n, v;
    Card A[MAX], B[MAX];
    char S[10];

    scanf("%d", &n);

    rep(i,n){
        scanf("%s %d", S, &v);
        A[i].suit = S[0];
        A[i].value = v;
        B[i].suit = S[0];
        B[i].value = v;
    }

    quickSort(A, 0, n-1);
    mergeSort(B, 0, n);

    bool isStable = true;
    rep(i,n){
        if(A[i].suit != B[i].suit){
            isStable = false;
            break;
        }
    }

    if(isStable) printf("Stable\n");
    else printf("Not stable\n");

    rep(i,n){
        printf("%c %d\n", A[i].suit, A[i].value);
    }

    return 0;

}
