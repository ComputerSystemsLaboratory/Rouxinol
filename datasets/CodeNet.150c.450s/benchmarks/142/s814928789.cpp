#include <stdio.h>

int main() {
    int n,k;
    scanf ("%d%d",&n,&k);
    long long int score[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &score[i]);
    }
    
    for (int i = 0, j = k; i < n-k; i++,j++) {
        if (score[j-k] < score[j]) {
            printf ("Yes\n");
        }
        else if (score[j-k] >= score[j]) {
            printf ("No\n");
        }
    }
    return 0;
}