#include <stdio.h>
#include <string.h>
#define N 110
#define INF_MAX 0x3f3f3f3f
int p[N];
int m[N][N];
int n;
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d %d", &p[i], &p[i+1]);
    for(int i = 0; i < n; i++) m[i][i] = 0;
    for(int len = 2; len <= n; len++){
        for(int i = 1; i <= n-len+1; i++){
            int j = i+len-1;
            m[i][j] = INF_MAX;
            for(int k = i; k < j; k++){
                int temp = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                m[i][j] = m[i][j] < temp ? m[i][j] :temp;
            }
        }
    }
    printf("%d\n", m[1][n]);
    return 0;
}
