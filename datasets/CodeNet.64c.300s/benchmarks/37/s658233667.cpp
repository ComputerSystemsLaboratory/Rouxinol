
#include <stdio.h>
int p=0;
int solve(int n){
    int i=1,k=0,l=1;
    while(i<n){
        k=i;
        l=k+1;
        while(k<=n){
            
            k=k+l;
            l++;
            if(k==n){
                p++;
                break;
            }
        }
        i++;
    }
    return k;
}


int main(void){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        solve(n);
       
        printf("%d\n",p);
        p=0;
    }
    
    return 0;
}