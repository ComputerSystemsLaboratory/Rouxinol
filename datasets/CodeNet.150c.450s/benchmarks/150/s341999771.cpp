#include <bits/stdc++.h>
using namespace std;
#define MAX 2000005
#define VMAX 10005
int A[MAX],C[MAX],B[MAX];
int n;
void CountingSort(){
    for(int i=0;i<n;++i){
        C[A[i]]++;
    }
    for(int i=1;i<VMAX;++i){
        C[i] = C[i]+C[i-1];
    }
    for(int i=n-1;i>=0;i--){
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }
}

int main(){

    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<VMAX;++i){
        C[i] = 0;
    }
    CountingSort();
    for(int i=1;i<n;++i){
        printf("%d ",B[i]);
    }

    printf("%d\n",B[n]);

    return 0;
}


