#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

void swap(char* M, int* A, int a, int b) {
    int tmp = A[a];
    A[a] = A[b];
    A[b] = tmp;
    char tmpc = M[a];
    M[a] = M[b];
    M[b] = tmpc;
}

int partition(char* M, int* A, int p, int r) {
    int div = A[r], i=p;
    for (int j=p; j<=r; j++) {
        if (A[j] <= div) {
            i++;
            swap(M, A, i-1, j);
        }
    }
    return i-1;
}

void quick(char* M, int* A, int p, int r) {
    if (p < r) {
        int q = partition(M, A, p, r);
        quick(M, A, p, q-1);
        quick(M, A, q+1, r);
    }
}

char LM[50002], RM[50002];
int LA[50002], RA[50002];

void merge(char* M, int* A, int n, int left, int mid, int right) {
    int i,j,k;
    int n1 = mid-left;
    int n2=right-mid;
    for (i=0; i<n1; i++) {
        LM[i] = M[left+i];
        LA[i] = A[left+i];
    }
    for (i=0; i<n2; i++) {
        RM[i] = M[mid+i];
        RA[i] = A[mid+i];
    }
    LA[n1] = RA[n2] = 2000000000;
    i=j=0;
    for (k=left; k<right; k++) {
        if (LA[i]<=RA[j]) {
            M[k]=LM[i];
            A[k]=LA[i];
            i++;
        } else {
            M[k]=RM[j];
            A[k]=RA[j];
            j++;
        }
    }
}

void mergesort(char* M, int* A, int n, int left, int right) {
    int mid;
    if (left+1<right) {
        mid = (left+right)/2;
        mergesort(M, A, n, left, mid);
        mergesort(M, A, n, mid, right);
        merge(M, A, n, left, mid, right);
    }
}

int main() {
    int n;
    std::cin>>n;
    int N[100001];
    char M[100001];
    int N_ref[100001];
    char M_ref[100001];
    for (int i=0; i<n; i++) {
        std::cin >> M[i] >> N[i];
        M_ref[i]=M[i];
        N_ref[i]=N[i];
    }
    quick(M, N, 0, n-1);
    mergesort(M_ref, N_ref, n, 0, n);
    bool stable = true;
    for (int i=0; i<n; i++) {
        if (M[i] != M_ref[i]) {
            stable = false;
        }
    }
    if (stable) {
        std::cout << "Stable" << std::endl;
    } else {
        std::cout << "Not stable" << std::endl;
    }
    for (int i=0; i<n; i++) {
        std::cout << M[i] << " " << N[i] << std::endl;
    }

    return 0;
}
