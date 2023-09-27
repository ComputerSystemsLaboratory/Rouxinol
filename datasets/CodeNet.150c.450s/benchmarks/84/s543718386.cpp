#include <bits/stdc++.h>
#include <cmath>


#define MAX 200000
int L[MAX/2 + 2], R[MAX/2 + 2];


long long merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    long long cnt = 0;

    for (int i = 0; i < n1; i++)
        L[i] = arr[left+i];

    for (int i = 0; i < n2; i++)
        R[i] = arr[mid+i];

    L[n1] = R[n2] = INT_MAX;

    int i = 0; int j = 0;

    for (int k = left; k < right; k++) {
        if (L[i] <= R[j])
            arr[k] = L[i++];
        else {
            arr[k] = R[j++];
            cnt += n1 - i; //= mid + j - k - 1
        }
    }
    return cnt;
}


long long mergeSort(int arr[], int n, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) /2;
        long long v1 = mergeSort(arr, n, left, mid);
        long long v2 = mergeSort(arr, n, mid, right);
        long long v3 = merge(arr, left, mid, right);
        return v1 + v2 + v3;
    }
    return 0;
}

int main()
{
    int N;
    std::scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) std::scanf("%d", &arr[i]);
    long long cnt = mergeSort(arr, N, 0, N);
    std::cout << cnt << std::endl;



    return 0;
}

