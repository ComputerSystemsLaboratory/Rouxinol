#include <stdio.h>
#define N 1000000007
 
typedef unsigned long long int ulli;
 
ulli power(ulli,ulli);
 
int main(void){
    ulli m,n;
    scanf("%llu %llu",&m,&n);
    printf("%llu\n",power(m,n));
    return 0;
}
 
ulli power(ulli x,ulli y){
    ulli A;
    if(y==0) return 1;
    if(y==1) return x;
    if(y%2==0){
        A=power(x,y/2);
        return ((A%N)*(A%N))%N;
    }else{
        A=power(x,(y-1)/2);
        return (( (A%N)*(A%N) )%N*(x%N))%N;
    }
}