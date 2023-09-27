#include <iostream>
#include <cstring>

constexpr int MAXIMUM = 2000000000;

long long merge(int * A, int left, int mid, int right) {
    int n1 = mid - left, n2 = right - mid;
    int L[n1 + 1], R[n2 + 1];
    std::memcpy(L, A + left, sizeof(int) * n1);
    std::memcpy(R, A + mid, sizeof(int) * n2);
    L[n1] = MAXIMUM, R[n2] = MAXIMUM;

    int j = 0, k = 0;
    long long cnt = 0;
    for (int i = left; i < right; i++) {
        if (L[j] <= R[k]) {
            A[i] = L[j];
            j++;
        } else {
            A[i] = R[k];
            k++;
            cnt += n1 - j;
        }
    }
    return cnt;
}

long long mergeSort(int * A, int left, int right) {
    long long count = 0;
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        count += mergeSort(A, left, mid);
        count += mergeSort(A, mid, right);
        count += merge(A, left, mid, right);
    }
    return count;
}

int bubbleSort(int * A, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (A[j] < A[j - 1]) {
                std::swap(A[j], A[j - 1]);
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    std::cin >> n;

    int A[n];
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    // int B[n];
    // std::memcpy(B, A, sizeof(int) * n);
    // int ans = bubbleSort(B, n);
    // std::cout << ans << std::endl;
    
    long long count = mergeSort(A, 0, n);
    std::cout << count << std::endl;
}

