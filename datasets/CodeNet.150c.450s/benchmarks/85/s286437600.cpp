#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

#define INFTY 2000000000

int p[100], c[105][105];

void solve( int n ){

    int i, j, k, l;

    for( i = 1; i <= n; i++ ) c[i][i] = 0;

    for( l = 2; l <= n; l++ ){

        for( i = 1; i <= n - l + 1 ; i++ ){

            j = i + l - 1;

            c[i][j] = INFTY;

            for( k = i; k <= j - 1; k++ ){

                c[i][j] = min( c[i][j], c[i][k] + c[k+1][j] + p[i-1] * p[k] * p[j] );

            }

        }

    }

}


int main(){

    int n, i, trash;

    scanf("%d", &n);

    for( i = 1; i <= n; i++ ){

        scanf("%d %d", &p[i-1], &p[i] );

    }

    solve(n);

    printf("%d\n", c[1][n]);

}

