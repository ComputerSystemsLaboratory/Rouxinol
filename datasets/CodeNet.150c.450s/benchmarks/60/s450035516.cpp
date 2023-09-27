#include<bits/stdc++.h>
using namespace std;
static const int N = 100;

int main(){
    int M[N][N];
    int n, u, k, v;

    scanf("%d",&n);

    for( int i = 0; i < n; ++i ){
        for( int j = 0; j < n; ++j ) M[i][j] = 0;
    }

    for( int i = 0; i < n; ++i ){
        scanf("%d %d",&u,&k);
        u--;
        for( int j = 0; j < k; ++j ){
            scanf("%d",&v);
            v--;
            M[u][v] = 1;
        }
    }

    for( int i = 0; i < n; ++i ){
        for( int j = 0; j < n; ++j ){
            if( j ) putchar(' ');
            printf("%d",M[i][j]);
        }
        puts("");
    }

    return 0;
}

