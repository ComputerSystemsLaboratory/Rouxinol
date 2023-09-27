//
//  main.cpp
//  单元最短路径
//
//  Created by 陆昱珉 on 2018/12/26.
//  Copyright © 2018 Lu. All rights reserved.
//

//dijkstra algorithm

#include <stdio.h>
#define INF 999999

int n, k;
int color[3000], d[3000];
int map[3000][3000];

int dijkstra(int s)
{
    for(int i = 0; i < n; i ++)
    {
        d[i] = INF;
    }
    d[s] = 0;
    while(1)
    {
        int min = INF;
        int u = -1;
        for(int i = 0; i < n; i ++)
        {
            if(min > d[i] && color[i] != 1)
            {
                u = i;
                min = d[i];
            }
        }
        if(u == -1)
            break;
        color[u] = 1;//染色，以防后面重复使用
        for(int i = 0; i < n; i ++)
        {
            if(color[i] != 1 && map[u][i] != INF)
                if(d[i] > d[u] + map[u][i])
                    d[i] = d[u] + map[u][i];
        }
    }
    return 0;
}

int main(void)
{
    int x, y, v;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < n; j ++)
            map[i][j] = INF;
    for(int i = 0; i < n; i ++)
    {
        scanf("%d%d", &x, &k);
        for(int j = 0; j < k; j ++)
        {
            scanf("%d%d", &y, &v);
            map[x][y] = v;
        }
    }
    dijkstra(0);
    
    for(int i = 0; i < n; i ++)
    {
        if(d[i] != INF)
            printf("%d %d", i, d[i]);
        printf("\n");
    }
    return 0;
}

