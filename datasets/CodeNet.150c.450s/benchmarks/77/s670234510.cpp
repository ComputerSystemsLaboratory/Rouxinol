#include <stdio.h>
#include <string.h>

#define N 0
#define E 1
#define S 2
#define W 3

int dir[4][2] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
int map[21][21];

int main(void)
{
    while(true) {
        int n, m;
        int px=10, py=10, s=0;

        memset(map, 0, sizeof(map));

        scanf("%d\n", &n);
        if(n==0) break;


        for(int i=0; i < n; i++)
        {
            int x,y;
            scanf("%d%d\n", &x, &y);

            map[x][y] = 1;
        }

        scanf("%d\n", &m);

        map[10][10] = 0;
        for(int i=0; i < m; i++)
        {
            char d;
            int *D, l;
            scanf("%c %d\n", &d, &l);
            switch(d) {
                case 'N':
                    D = dir[N];
                    break;
                case 'E':
                    D = dir[E];
                    break;
                case 'S':
                    D = dir[S];
                    break;
                case 'W':
                    D = dir[W];
                    break;
            }

            for(int i=0; i < l; i++)
            {
                px += *D;
                py += *(D+1);
                map[px][py] = 0;
            }
        }

        for(int i=0; i <= 20; i++)
            for(int j=0; j <= 20; j++)
                s += map[i][j];

        printf( s ? "No\n" : "Yes\n");
    }

    return 0;
}