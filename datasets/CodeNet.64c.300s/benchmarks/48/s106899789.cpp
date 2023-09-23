#include <cstdio>

long MAX=999999;

int main(void){
    long int s[1000000]={0},k=0,i,j,n;
    
    for(i=2;i<=MAX;i++){
        if( !s[i] ){
            k++;
            for(j=2;j*i<=MAX;j++){
                s[j*i]=-1;
            }
        }
        s[i]=k;
    }
    
    
    while(EOF != scanf("%ld",&n)){
        printf("%ld\n",s[n]);
    }
    
    
    return 0;
}