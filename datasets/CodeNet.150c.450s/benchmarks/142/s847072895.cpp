#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[200001];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]); 
    }
   
    for(int i = 0, j = k; i<n-k; i++, j++){
        if(a[j] > a[j-k]){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}