#include <bits/stdc++.h>

int main(){
    int n ,i = 1;
    scanf("%d",&n);
    do{
        int x = i;
        if(x%3==0){
            printf(" %d",i);
        }else{
            do{
                if(x%10 == 3){
                    printf(" %d",i);
                    break;
                } 
                x/= 10;
            }while(x);
        }
    }while(++i<=n);
    putchar('\n');
    return 0;
}

