#include<stdio.h>

int A[20], N;

bool exhaustiveSearch(int m, int s, int n){
    if(n==N+1) return false;//it's over
    if(s==m) return true;

    if (exhaustiveSearch(m,s,n+1)) {
        return true;
    }else
    {
        return exhaustiveSearch(m,s+A[n],n+1);
    }
}

int main(){
    int i,q;
    scanf("%d",&N);
    for(i=0;i<N;i++) scanf("%d",&A[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++){
        int m;
        scanf("%d",&m);
        exhaustiveSearch(m,0,0)?printf("yes\n"):printf("no\n");
    }
    return 0;
}
