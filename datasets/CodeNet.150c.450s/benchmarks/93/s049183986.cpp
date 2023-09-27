#include <iostream>
#define MAX 100000
#define INFTY 1000000001

using namespace std;

typedef struct{
    char suit;
    int number;
}Card;

Card A[MAX];
Card B[MAX];
int n;

void swapCard(int a, int b){
    Card tmp = A[a];
    A[a] = A[b];
    A[b] = tmp;
}

void merge(Card *A, int left, int mid, int right){
    int i, j;
    int n1 = mid - left;
    int n2 = right - mid;
    Card L[n1+1], R[n2+1];
    for(i = 0; i < n1; i++) L[i] = A[left + i];
    for(i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1].number = INFTY;
    R[n2].number = INFTY;
    i = 0;
    j = 0;
    for(int k = left; k < right; k++){
        if(L[i].number <= R[j].number){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(Card *A, int left, int right){
    int mid;
    if(left + 1 < right){
        mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int partition(int p, int r){
    int x = A[r].number;
    int i = p - 1;
    int tmp;
    for(int j = p; j < r; j++){
        if(A[j].number <= x){
            i++;
            swapCard(i, j);
        }
    }
    swapCard(i+1, r);
    return i+1;
}

void quickSort(int p, int r){
    if(p < r){
        int q = partition(p, r);
        quickSort(p, q-1);
        quickSort(q+1, r);
    }
}

bool isStable(){
    for(int i = 0; i < n; i++){
        if(A[i].suit != B[i].suit) return false;
    }
    return true;
}

int main(){
    int i;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> A[i].suit >> A[i].number;
        B[i] = A[i];
    }
    quickSort(0, n-1);
    mergeSort(B, 0, n);
    if(isStable()) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    for(i = 0; i < n; i++){
        cout << A[i].suit << " " << A[i].number << endl;
    }
    return 0;
}
