#include <cstdio>
using namespace std;

int main(){
    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);
    int a[n][m], b[m][l];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < l; ++j){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < l; ++j){
            long c = 0;
            for(int k = 0; k < m; ++k){
                c += a[i][k] * b[k][j];
            }
            printf("%ld", c);
            char ch = j == l - 1 ? '\n' : ' ';
            printf("%c", ch);
        }
    }
    return 0;
}