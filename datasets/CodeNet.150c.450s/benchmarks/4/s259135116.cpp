#include <stdio.h>

int main(void)
{
    int m=0, f=0, r=0;
    
    while(1) {
        scanf("%d%d%d",&m,&f,&r);
        if ((m==-1)&&(r==-1)&&(f==-1))
            return 0;
        if((m==-1)||(f==-1)) 
            printf("F\n");
        else if(m+f<30)
            printf("F\n");
        else if(m+f<50) {
            if(r>=50) 
                printf("C\n");
            else
                printf("D\n");
        } else if(m+f<65)
            printf("C\n");
        else if(m+f<80)
            printf("B\n");
        else 
            printf("A\n");
    }
    
    return 0;
}   