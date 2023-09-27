#include <math.h>
#include <stdio.h>

int main(void){
    double debt = 100; //  x100
    int n;
    
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        debt *= 1.05;
        debt = ceil(debt);
    }
    printf("%d000\n", (int)debt);
}