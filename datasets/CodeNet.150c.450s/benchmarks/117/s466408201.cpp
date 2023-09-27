#include <iostream>
using namespace std;
#define MAX 500000
#define INF 1000000001

int L[MAX/2 + 2], R[MAX/2 + 2];
int cnt;

void merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int i;
    for (i = 0 ; i < n1 ; i++) L[i] = A[left + i];
    for (i = 0 ; i < n2 ; i++) R[i] = A[mid  + i];
    L[n1] = INF;
    R[n2] = INF;
    i = 0;
    int j = 0;

    for (int k = left ; k < right ; k++) {
        cnt ++;
        if(L[i] <= R[j]) {
            A[k] = L[i];
            i ++;
        }else{
            A[k] = R[j];
            j ++;
        }
    }
}

void mergeSort(int A[], int left, int right) {
    int mid;
    if (left+1 < right) {
        mid = (left + right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main(void) {
    int N;
    int A[MAX];
    int i;
    cnt = 0;

    cin >> N;
    for(i = 0 ; i < N ; i++) cin >> A[i];

    mergeSort(A, 0, N);

    for (i = 0 ; i < N ; i++) { 
        if(i) cout << " ";
        cout << A[i];
    }
    cout << "\n";

    cout << cnt << "\n";

    return 0;
}