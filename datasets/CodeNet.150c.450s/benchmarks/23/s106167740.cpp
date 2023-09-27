#include <cstdio>

int fib(int *a,int n){
    if(n==0 || n==1)return 1;
    else{
        int tmp;
        if(a[n])tmp = a[n];
        else{
            tmp = fib(a,n-1) + fib(a,n-2);
            a[n] = tmp;
        }
        return tmp;
    }
}

int main(){
    int i, n;
    int a[45];
    for(i=0;i<45;i++)a[i]=0;
    scanf("%d",&n);
    printf("%d\n",fib(a,n));
    return 0;
}

