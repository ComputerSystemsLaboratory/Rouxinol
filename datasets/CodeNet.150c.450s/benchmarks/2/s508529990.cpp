#include <iostream>

#define MAX 100000
int A[MAX];

int partition(int A[],int p,int r) {
    int x = A[r];
    int i = p - 1, tmp;
    for (int j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            tmp = A[i]; A[i]=A[j]; A[j] = tmp;
        }
    }
    tmp = A[i+1]; A[i+1] = A[r]; A[r] = tmp;
    
    return i+1;
}

int main(void){
    // Your code here!
    int n, p;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }
    
    p = partition(A, 0, n-1);
    
    for (int i = 0; i < n; i++) {
        if (i) std::cout << " ";
        if (i == p) std::cout << "[";
        std::cout << A[i];
        if (i == p) std::cout << "]";
    }
    
    std::cout << std::endl;
    
    return 0;
}

