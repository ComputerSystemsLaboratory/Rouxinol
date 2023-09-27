#include<stdio.h>

#define WHITE 0   // not visited yet.
#define GRAY 1    // visited, but not completed.
#define BLACK 2   // search completed.

int G[101][101];        // adjacency list.
int color[101];         // visited/completed sign.
int n;                  // size.
int d[101], f[101], t;  // first visit time/complete time.

void search_loop(int i) 
{
    int next;
    d[i] = ++t;
    color[i] = GRAY;  // first visited.

    for(next = 1; next <= n; next++){
        if(i == next && G[i][i] > 0) break;   // if self-looped, through.
        if(G[i][next] > 0 && color[next] == WHITE){  // if not visited yet, visit.
            search_loop(next);
        }
    }
    f[i] = ++t;
    color[i] = BLACK;  // completed. 

    return;
}

void dfs()
{
    int i;
    for(i = 1; i <= n; i++) color[i] = WHITE;  // initialize.
    t = 0;

    for(i = 1; i <= n; i++) if(color[i] == WHITE) search_loop(i);

    for(i = 1; i <= n; i++) printf("%d %d %d\n", i, d[i], f[i]);

    return ;
}

int main()
{
    int i, j, k, e;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){ G[i][j] = 0; } }

    do{
        scanf("%d %d", &i, &e);
        for(j = 1; j <= e; j++){
            scanf("%d", &k);
            G[i][k] = 1;
        }
    }while(i < n);

    dfs();
    return 0;
}