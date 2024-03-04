#include <stdio.h> 
#include <stdlib.h> 
 
int main(void) 
{ 
    int h[10]; 
    int idx1, idx2, idx3 = -1; 
    int temp_h = 0; 
    int i; 

 
    for(i = 0; i < 10; i++) 
        scanf("%d", h + i); 
 
    /* 1 番目に高い山を探す */ 
    for(i = 0; i < 10; i++) { 
        if(h[i] > temp_h) { 
            temp_h = h[i]; 
            idx1 = i; 
        } 
    } 

 
    /* 2 番目に高い山を探す */ 
    temp_h = 0; 
    for(i = 0; i < 10; i++) { 
        if(i == idx1) continue; 

        if(h[i] > temp_h) { 
            temp_h = h[i]; 
            idx2 = i; 
        } 
    } 

 
    /* 3 番目に高い山を探す */ 
    temp_h = 0; 
    for(i = 0; i < 10; i++) { 
        if(i == idx1 || i == idx2) continue; 

 
        if(h[i] > temp_h) { 
            temp_h = h[i]; 
            idx3 = i; 
        } 
    } 


    printf("%d\n%d\n%d\n", h[idx1], h[idx2], h[idx3]); 

 
    return 0; 
} 
