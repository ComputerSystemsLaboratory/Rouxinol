#include <stdio.h>
#include <stdlib.h>

int n,m,*A;

int possible(int sum,int i){
    if(sum>m){
        return 0;
    }else if(sum==m){
        return 1;
    }else if(i==n){
        return 0;
    }else{
        if(possible(sum+A[i],i+1)){
            return 1;
        }else if(possible(sum,i+1)){
            return 1;
        }else{
            return 0;
        }
    }
}

int main(){
    int q;
    int i;
    scanf("%d",&n);
    A = (int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)scanf("%d",A+i);
    scanf("%d",&q);
    while(q){
        scanf("%d",&m);
        printf(possible(0,0) ? "yes\n" : "no\n");
        q--;
    }
}