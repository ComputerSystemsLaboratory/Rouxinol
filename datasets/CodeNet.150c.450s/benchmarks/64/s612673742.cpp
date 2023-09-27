#include <stdio.h>

int main(){
    int n = 0, a[20], q, m[200],cnt=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++){
        scanf("%d", &m[i]);
    }
    for (int i = 1; i < 1 << n; i++){
        int sum=0;
        for (int j = 0; j < n; j++){
            if(i >> j & 1){
                sum += a[j];
            }
        }
        for (int k = 0; k < q; k++){
            if (m[k] == sum){
                m[k] = 0;
            }
        }
    }
    for (int k = 0; k < q; k++){
        if (m[k]){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
 
    return 0;
}