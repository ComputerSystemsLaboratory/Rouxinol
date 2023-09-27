#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

long int LA[100002], RA[100002];

long int merge(long int* A, int n, int left, int mid, int right) {
    int i,j,k;
    long int inv=0;
    int n1 = mid-left;
    int n2=right-mid;
    for (i=0; i<n1; i++) {
        LA[i] = A[left+i];
    }
    for (i=0; i<n2; i++) {
        RA[i] = A[mid+i];
    }
    LA[n1] = RA[n2] = 2000000000;
    i=j=0;
    for (k=left; k<right; k++) {
        if (LA[i]<=RA[j]) {
            A[k]=LA[i];
            i++;
        } else {
            A[k]=RA[j];
            inv+=(n1-i);
            j++;
        }
    }
    return inv;
}

long int mergesort(long int* A, int n, int left, int right) {
    int mid;
    long int inv1=0, inv2=0, inv3=0;
    if (left+1<right) {
        mid = (left+right)/2;
        inv1 = mergesort(A, n, left, mid);
        inv2 = mergesort(A, n, mid, right);
        inv3 = merge(A, n, left, mid, right);
    }
    return inv1+inv2+inv3;
}

int main() {
    int n;
    std::cin >> n;
    static long int a[200001];
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
    }

    std::cout << mergesort(a, n, 0, n) << std::endl;

    return 0;
}
