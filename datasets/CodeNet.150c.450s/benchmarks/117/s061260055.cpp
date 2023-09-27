#include<iostream>
using namespace std;
#define INF 9999999999

long long S[500005], L[250005], R[250005];
long long sum=0;

void merge(int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i=0; i<n1; i++) {
        L[i] = S[left + i];
    }
    for (int i=0; i<n2; i++) {
        R[i] = S[mid + i];
    }
    L[n1] = INF;
    R[n2] = INF;
    int i = 0, j = 0;
    for (int k=left; k<right; k++) {
        if (L[i] <= R[j]) {
            S[k] = L[i];
            i++;
        }
        else {
            S[k] = R[j];
            j++;
        }
        sum++;
    }
}

void mergeSort(int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid, right);
        merge(left, mid, right);
    }
    return;
}

int main() {
    int n, i;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> S[i];
    }
    mergeSort(0, n);
    for (i=0; i<n; i++) {
        cout << S[i] << (i != n-1 ? " " : "\n");
    }
    cout << sum << endl;
}
