#include <cstdio>
#include <algorithm>
using namespace std;
  
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r + 1][c + 1] ;
    fill(a[0], a[r + 1], 0);
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            scanf("%d", &a[i][j]);
            a[i][c] += a[i][j];
            a[r][j] += a[i][j];
            a[r][c] += a[i][j];
            printf("%d ", a[i][j]);
        }
        printf("%d\n", a[i][c]);
    }
    for(int i = 0; i < c; ++i){
        printf("%d ", a[r][i]);
    }
    printf("%d\n", a[r][c]);
  
    return 0;
}