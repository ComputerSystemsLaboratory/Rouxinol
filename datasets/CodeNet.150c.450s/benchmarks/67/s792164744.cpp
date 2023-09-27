#include<cstdio>

int main(void) {
    while(true) {
        int n,res=0;
        scanf("%d", &n);
        if(!n) break;
        
//      N = n(a+a+(n-1))/2
//      a = (2*N/n-n+1)/2
        for(int m=2; m<1000; m++) {
            if(!(2*n % m))
                if(!((2*n/m-m+1)%2))
                    if(2*n/m-m+1 > 0)
                        res++;
        }
        printf("%d\n",res);
    }
    return 0;
}