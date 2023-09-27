#include<stdio.h>
 
int pnCheck(int);
 
int main() {
    int i,j;
    int data;
 
    scanf("%d", &data);
    printf("%d:", data);

    if(pnCheck(data)){
        printf(" %d\n",data);
        return 0;
    }


    i = 2;
    while (data%i==0) {
        data /= 2;
        printf(" 2");
    }
 
    for (i = 3; i <= data; i+=2) {
        if (pnCheck(i)) {
            while (data%i==0) {
                data /= i;
                printf(" %d", i);
            }
        }
    }
    printf("\n");
    return 0;
}
 
int pnCheck(int x) {
    if(x%2==0)return 0;
    int i;
    int fl = 0;
 
    for (i = 3; i*i <= x; i += 2) {
        if (pnCheck(i)) {
            if (fl = (x % i == 0)) break;
        }
    }
    return !fl;
}