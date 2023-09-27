#include <iostream>
 
 
void countingSort(int *A, int *B, int k, int n){
    int i;
    int *C;
 
    C = new int[k+1];
    for(i=0;i<k+1;i++){
        C[i] = 0;
    }
     
    for(i=0;i<n;i++){
        C[A[i]]++;
    }
    for(i=1;i<k+1;i++){
        C[i] = C[i] + C[i-1];
    }
     
    for(i=n-1;i>=0;i--){
        B[C[A[i]]-1] = A[i];
        C[A[i]] --;
    }
    delete []C;
}
 
int main(void){
    int i,n,k;
    int *A, *B;
     
    std::cin >> n;
    A = new int[n];
    B = new int[n];
    for(i=0;i<n;i++){
        std::cin >> A[i];
    }
    k = A[0];
    for(i=1;i<n;i++){
        if(A[i]>k){
            k=A[i];
        }
    }
    countingSort(A, B, k, n);
    for(i=0;i<n-1;i++){
        std::cout << B[i] << " ";
    }
    std::cout << B[i] << std::endl;
    delete []A;
    delete []B;
    return 0;
}