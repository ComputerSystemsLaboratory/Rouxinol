#include<stdio.h>
int main(){
    int i, j;
    int n, q;
    int s[20000];
    int t[20000];
    int count = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &s[i]);
    }
    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%d", &t[i]);
    }
    for(i=0; i<q; i++){
        for(j=0; j<n; j++){
            if(t[i]==s[j]){
                count += 1;
                break;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}