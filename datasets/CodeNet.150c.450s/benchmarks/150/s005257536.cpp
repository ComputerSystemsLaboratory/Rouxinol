#include <stdio.h>

using namespace std;

int main(){
    int C[10001] = {0};
    int n;
    scanf("%d",&n);
    int* A = new int[n];
    int* B = new int[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&A[i]);
        C[A[i]]++;
    }
    for(int i = 1; i < 10001; i++) C[i] += C[i-1];

    for(int i = n-1; i >= 0; i--) B[(C[A[i]]--)-1] = A[i];

    for(int i = 0; i < n-1; i++) printf("%d ",B[i]);
    printf("%d\n",B[n-1]);
}