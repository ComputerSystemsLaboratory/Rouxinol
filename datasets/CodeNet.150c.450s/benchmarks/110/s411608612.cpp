//
//  0558.cpp
//  
//
//  Created by Yoshida Satoshi on 2017/11/16.
//
//

#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
#include <stdlib.h>

#define MAX 1000
#define INF 100000000
#define FOR(index,max) for(int index=0;index<max;index++)

using namespace std;

typedef pair<int, int> P;

int ctoi(char c){
    switch(c){
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        default : return -1;
    }
}

int main(){
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    int nx,ny;
    
    queue<P> que;
    int H,W,N;
    int state[MAX][MAX];//0:????????°or????????? -1:????????¶???
    int d[MAX][MAX];
    int ans=0;
    int sx[10];
    int sy[10];
    P p;
    char in;
    cin>>H>>W>>N;
    FOR(i,H){
        FOR(j,W){
            cin>>in;
            if(in=='S'){
                sx[0]=i;
                sy[0]=j;
                state[i][j]=0;
            }
            else if(in=='X') state[i][j]=-1;
            else if(in=='.') state[i][j]=0;
            else{
                state[i][j]=0;
                sx[ctoi(in)]=i;
                sy[ctoi(in)]=j;
                
            }
        }
    }
    
    FOR(k,N){
        FOR(i,H){
            FOR(j,W){
                d[i][j]=INF;
            }
        }
        que.push(P(sx[k],sy[k]));
        d[sx[k]][sy[k]]=0;
        while(que.size()){
            p=que.front();
            que.pop();
            
            if(p==P(sx[k+1],sy[k+1]))   break;
            
            FOR(l,4){
                nx=p.first+dx[l];
                ny=p.second+dy[l];
                
                if(!(nx<0||ny<0||nx>H-1||ny>W-1||state[nx][ny]==-1||d[nx][ny]!=INF)){
                    que.push(P(nx,ny));
                    d[nx][ny]=d[p.first][p.second]+1;
                }
            }
        }
        
        ans += d[sx[k+1]][sy[k+1]];
        queue<P> empty;
        swap(empty,que);
    }
    
    cout<<ans<<endl;
    
    return 0;
}