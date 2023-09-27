#include <stdio.h>

using namespace std;

int main(){
    int C[10001];
    for(int i = 0; i < 10001; i++) C[i] = 0;
    int n;
    scanf("%d",&n);
    int* A = new int[n];
    int* B = new int[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&A[i]);
        C[A[i]]++;
    }

    for(int i = 0,j=0; i < 10001; i++){
        if(C[i] != 0){
            for(int k = 0; k < C[i]; k++){
                B[j++] = i;
            }
        }
    }

    for(int i = 0; i < n-1; i++) printf("%d ",B[i]);
    printf("%d\n",B[n-1]);
    delete[] A;
    delete[] B;
    return 0;
}