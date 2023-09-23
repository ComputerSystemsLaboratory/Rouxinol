#include <stdio.h>

int main(void) {
    int hairetu[3];
    int temp;
    int i,j;
    for(i=0;i<3;i++)scanf("%d",&hairetu[i]);
    for(i=2;i>=0;i--) {
        for(j=0;j<i;j++) {
            if(hairetu[j]>hairetu[j+1]) {
                temp=hairetu[j];
                hairetu[j]=hairetu[j+1];
                hairetu[j+1]=temp;
            }
        }
    }
    printf("%d %d %d\n",hairetu[0],hairetu[1],hairetu[2]);
    return 0;
}