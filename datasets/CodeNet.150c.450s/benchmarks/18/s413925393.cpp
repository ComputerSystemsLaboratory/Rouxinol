#include <stdio.h>

int main(int argc, char *argv[]){
    
    int debt=100000;
    int n, m=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        debt += debt*0.05;
        m = debt % 1000;
        if(m != 0){
            debt -= m;
            debt += 1000;
        }
    }
    
    printf("%d\n", debt);
    
    return 0;
}