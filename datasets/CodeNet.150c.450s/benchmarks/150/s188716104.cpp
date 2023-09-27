#include<cstdio>
#define MAX 2000000
#define VMAX 10001
using namespace std;

int n;
int A[MAX]={0},B[MAX]={0},C[VMAX]={0};

void CountingSort(){
    for(int j=0;j<n;j++){
        C[A[j]]++;
    }
    for(int i=1;i<VMAX;i++){
        C[i]+=C[i-1];
    }
    for(int j=n-1;j>=0;j--){
        C[A[j]]--;
        B[C[A[j]]]=A[j];
    }
}

int main(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &A[i]);
    }
    CountingSort();
    for(int i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d", B[i]);
    }
    printf("\n");
}
