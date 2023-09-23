#include<stdio.h>
#define DIV 1000000007

typedef unsigned long long int verylong;

verylong mod(verylong m,int n){
    verylong x,y=0,z=0,i,j;
    /*printf("mod(%d,%d): called\n",m,n);*/
    if(n==0){
        return 1;
    }else if(n==1){
        return m;
    }else{
        x = mod((m*m)%DIV,n/2)%DIV;
        if(n%2==0){
            return x;
        }else{
            return (x*m)%DIV;
        }
    }
}

int main(){
    int m;
    int n;
    scanf("%d %d",&m,&n);
    printf("%d\n",mod(m,n));
}