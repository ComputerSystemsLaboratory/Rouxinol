#include<stdio.h>
int main(){
    int n,k ;
 
    int a[200002];
    scanf("%d %d", &n, &k);

    for (int i=0; i<n; i++){
        scanf ("%d", a + i);
    }

    for (int i=k; i<n; i++){
        if (a[i] > a[i - k]){  
            printf ("Yes\n");   
        }
        else {
            printf ("No\n");
        }
    }
    return 0;
}