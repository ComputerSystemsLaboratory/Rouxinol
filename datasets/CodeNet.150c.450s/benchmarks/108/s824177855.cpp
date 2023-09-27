//
//  main.cpp
//  619
//
//  Created by 8595198919 on 14/06/16.
//  Copyright (c) 2014年 8595198919. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <queue>
#define rep(i,n) for(int i = 0;i<n;i++)
using namespace std;

int dist[105];
queue<int> que;
vector<int> G[105];
int main(int argc, const char * argv[])
{
    int n;
    cin >> n;
    for(int i = 0;i <= n;i++) {
        dist[i]=-1;
    }
    for(int i = 0;i < n;i++){
        int u,k;
        int to;
        scanf("%d %d",&u,&k);
        for(int j=0;j<k;j++){
            scanf("%d",&to);
            G[u].push_back(to);
        }
    }
    que.push(1);
    dist[1]=0;
    while(!que.empty()){
        int now = que.front();
        que.pop();
        int d = dist[now];
        rep(i,G[now].size()){
            if(dist[G[now][i]]==-1){
                dist[G[now][i]]=d+1;
                que.push(G[now][i]);
            }
        }
    }
    for(int i = 1;i <= n;i++) {
        cout <<i <<" " << dist[i]<<endl;
    }
}