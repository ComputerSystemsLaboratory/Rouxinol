#include <iostream>
#define INFTY 1000000000
typedef long long ll;

ll merge(int A[], int left, int mid, int right){
    ll cnt = 0;
    int i, j, k;
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1 + 1];
    int R[n2 + 1];
    for(i=0; i<n1; i++){
        L[i] = A[left + i];
    }
    for(i=0; i<n2; i++){
        R[i] = A[mid + i];
    }
    L[n1] = INFTY;
    R[n2] = INFTY;
    i = 0;
    j = 0;
    for(k=left; k<right; k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i += 1;
        }
        else{
            A[k] = R[j];
            j += 1;
            cnt += n1 - i;
        }
    }
    return cnt;
}

ll mergeSort(int A[], int left, int right){
    int mid = (left + right) / 2;
    ll cnt = 0;
    if((left+1) < right){
        cnt += mergeSort(A, left, mid);
        cnt += mergeSort(A, mid, right);
        cnt += merge(A, left, mid, right);
    }
    return cnt;
}

int main(){
    int n;
    std::cin >> n;
    int S[n];
    for(int i=0; i<n; i++){
        std::cin >> S[i];
    }

    int left = 0;
    int right = n;
    ll cnt = mergeSort(S, left, right);

    std::cout << cnt << '\n';
    return 0;
}
