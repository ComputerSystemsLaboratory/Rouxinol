#include <stdio.h>

int main (){

    int n,x,c,j,k,i;
    
    while(1){ 
        c= 0;
            scanf("%d %d", &n,&x);
            if(n == 0 && x == 0)
            {
                return 0;
            }
    for(i = 1; i <= n; i++)
    {
        for(j = i + 1  ; j<= n; j++)
        {
            for(k = j + 1; k <= n; k++)
            {
                if(x == i + j + k){
                    c = c + 1;
                }
                    
                }
            }

        }
    printf("%d\n" , c);
    
}
    return 0;

}