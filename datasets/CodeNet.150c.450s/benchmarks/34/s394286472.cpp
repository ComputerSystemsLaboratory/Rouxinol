#include<cstdio>
#include<cstring>

int n;
int A[31];
/*DP????????????????????????*/
int solve(int k){
        if(A[k]>=0) return A[k];
        if(k==0) return A[k]=1;
        if(k==1) return A[k]=solve(k-1);
        if(k==2) return A[k]=solve(k-1)+solve(k-2);
        return A[k]=solve(k-1)+solve(k-2)+solve(k-3);
}

int main(){
        while(1){
                scanf("%d",&n);
                if(n==0) break;
                memset(A,-1,sizeof(A));
                printf("%d\n",solve(n)/10/365+1);
        }
        return 0;
}