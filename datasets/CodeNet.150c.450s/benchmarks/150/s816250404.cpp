#include <stdio.h>
#define AMX 10000
 

 
int main()
{
  int RYOMA[AMX] = {0},i,ra=0,j,N,a;
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &a);
        RYOMA[a]++;
    }
    for (i=0; i<AMX; i++) {
        if (RYOMA[i] != 0) {
            ra = i;
        }
    }
     
    for (i=0; i<ra; i++) {
        for (j=0; j<RYOMA[i]; j++) {
            printf("%d ", i);            
        }
    }
    for (i=0; i<RYOMA[ra]-1; i++) {
        printf("%d ", ra);
    }
    printf("%d\n", ra);
     
    return 0;
}