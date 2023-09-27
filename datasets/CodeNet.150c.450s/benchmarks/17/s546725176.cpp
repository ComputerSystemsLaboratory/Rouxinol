#include <stdio.h>
int main ()

{
    int number[30],i, j, a;
            for (i=0; i<5; ++i)
        scanf("%d",&number[i]);
            for (i=0; i<5; ++i)
                {
                    for (j=i+1; j<5; ++j)
                        {
                            if (number[i]<number[j])
                                {
                                    a=number[i];
                
                                    number[i]=number[j];
                
                                    number[j]=a;
                                }
                        }
                }
                    for (i=0; i<5; ++i)
                        {
                            printf("%d",number[i]);
                            if(i==4)
                                printf("\n");
                            else
                                printf(" ");
                        }
    
    return 0;
}