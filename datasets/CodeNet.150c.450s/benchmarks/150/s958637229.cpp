#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

short A[2000001],B[2000001];
int C[10002];

int main(){
    int n;
    int max = 0;
    scanf("%d",&n);
    
    for (int i = 0; i < 10002; i++) {
        C[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d",&A[i]);
        if (A[i] > max) {
            max = A[i];
        }
        C[A[i]]++;
    }
    for (int i = 1; i <= max; i++) {
        C[i] += C[i-1];
    }
    for (int i = 0; i < n; i++) {
        B[C[A[i]]-1] = A[i];
        C[A[i]]--;
    }
    for (int i = 0; i < n-1; i++){
        printf("%d ",B[i]);
    }
    printf("%d\n",B[n-1]);
    
    return 0;
}