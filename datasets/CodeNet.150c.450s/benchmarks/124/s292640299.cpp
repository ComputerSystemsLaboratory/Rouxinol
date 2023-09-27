#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
#define int(x) int x; scanf("%d",&x)
#define input(x) scanf("%d",&x)
#define rep(x,n) for(int x = 0; x < n; x++)
#define _br printf("\n")
#define INF 2000000000

vector<pair<int,int> > PathList[100];
int d[100];
bool complete[100];

void dijkstra(int n,vector<pair<int,int> > PathList[]){
    rep(i,n){
        d[i] = INF;
        complete[i] = false;
    }
    d[0] = 0;
    
    int count = 0;
    
    while (count != n) {
        int mind = INF;
        int mindi = 0;
        rep(i,n){
            if (!complete[i] && d[i] < mind) {
                mind = d[i];
                mindi = i;
            }
        }
        
        complete[mindi] = true;
        count++;
        
        rep(i,PathList[mindi].size()){
            if (PathList[mindi][i].second + d[mindi] < d[PathList[mindi][i].first]) {
                d[PathList[mindi][i].first] = PathList[mindi][i].second + d[mindi];
            }
        }
    }
}


int main(){
    int(n);
    rep(i,n){
        int(k);int(num);
        rep(j,num){
            int(s);int(t);
            PathList[i].push_back(make_pair(s,t));
        }
    }
    
    dijkstra(n,PathList);
    
    rep(i,n){
        printf("%d %d\n",i,d[i]);
    }
    
    return 0;
}