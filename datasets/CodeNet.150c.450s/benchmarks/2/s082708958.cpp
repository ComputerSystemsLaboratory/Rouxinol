#include <iostream>
#include <vector>

#define MAXNUM 100000
#define MAXVALUE 100000
int n;
int cnt;
int S[MAXNUM];
int L[MAXNUM/2 + 2];
int R[MAXNUM/2 + 2];

int partition(int *A, int p, int r){
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if(A[j] <= x) {
            i++;
            std::swap(A[i], A[j]);
        }
    }
    std::swap(A[i+1], A[r]);
    return i+1;
}


void merge(int *A, int left, int mid, int right){
    int nl = mid - left;
    int nr = right - mid;
    for (int i = 0; i < nl; i++) {
        L[i] = A[left+i];
    }
    for (int i = 0; i < nr; i++) {
        R[i] = A[mid+i];
    }
    L[nl] = MAXVALUE;
    R[nr] = MAXVALUE;
    int i = 0;
    int j = 0;
    for (int k = left; k < right; k++){
        cnt++;
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}


void mergesort(int *A, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
//         std::cout << "==========" << std::endl;
//         std::cout << mid << std::endl;
//         std::cout << "==========" << std::endl;
        mergesort(A, left, mid);
        mergesort(A, mid, right);
        merge(A, left, mid, right);
    }
}



int main() {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> S[i];
    }
    int pq = partition(S, 0, n-1);
    for(int i = 0; i < n; i++) {
        if (i == pq) {
            std::cout << "[" << S[i] << "]";
        }
        else{
            std::cout << S[i];
        }
        if (i != n-1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}