#include <cstdio>
using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int v[m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < m; ++i) scanf("%d", &v[i]);

    for(int i = 0; i < n; ++i){
        int val = 0;
        for(int j = 0; j < m; ++j) val += a[i][j] * v[j];
        printf("%d\n", val);
    }
    
    return 0;
}