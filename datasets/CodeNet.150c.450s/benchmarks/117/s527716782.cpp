#include <iostream>
#include <climits>

int cnt = 0;

void merge(int A[], int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1],R[n2];
    for(int i=0; i<n1; i++){
        L[i] = A[left + i];
    }
    for(int i=0; i<n2; i++){
        R[i] = A[mid + i];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    int i = 0;
    int j = 0;
    for(int k=left; k<right; k++){
        cnt++;
        if(L[i] <= R[j]){
            A[k] = L[i];
            i = i + 1;
        }else{
            A[k] = R[j];
            j = j + 1;
        }
    }
}

void merge_sort(int A[], int left, int right){
    if(left+1 < right){
        int mid = (left + right) / 2;
        merge_sort(A, left, mid);
        merge_sort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main(){
    int n;
    std::cin >> n;
    int A[n];
    for(int i=0;i<n;i++){
        std::cin >> A[i];
    }
    merge_sort(A,0,n);
    for(int i=0;i<n;i++){
        std::cout << A[i];
        if(i!=n-1){
            std::cout << " ";
        }else{
            std::cout << "\n";
        }
    }
    std::cout << cnt << "\n";
    return 0;
}
