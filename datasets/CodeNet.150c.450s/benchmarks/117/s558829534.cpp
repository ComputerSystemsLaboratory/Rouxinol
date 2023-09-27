#include <iostream>

int L[int(5e5 / 2)+10];
int R[int(5e5 / 2)+10];
const int INT_MAX_ = static_cast<int>(2e9);
int count = 0;

void merge(int* A, const int left, const int mid, const int right) {
    int n1 = mid - left;
    int n2 = right - mid;

    for(int i=0; i<n1; ++i) {
        L[i] = A[left + i];
    }

    for(int i=0; i<n2; i++) {
        R[i] = A[mid + i];
    }

    L[n1] = INT_MAX_;
    R[n2] = INT_MAX_;

    int i = 0;
    int j = 0;

    for(int k=left; k < right; ++k) {
        if(L[i] < R[j]) {
            count++;
            A[k] = L[i];
            ++i;
        } else {
            count++;
            A[k] = R[j];
            ++j;
        }
    }
}

void mergeSort(int* A, const int left, const int right) {
    if(left+1 < right) {
        const int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}


int main() {
    int n;
    std::cin >> n;
    int A[int(5e5)+10];

    for(int i=0; i<n; ++i) {
        std::cin >> A[i];
    }

    mergeSort(A, 0, n);

    for(int i=0; i<n; ++i) {
        if(i != n-1){
            std::cout << A[i] << " ";
        } else {
            std::cout << A[i];
        }
    }

    std::cout << std::endl;
    std::cout << count << std::endl;

}
