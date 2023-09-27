#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
P pos[200];
int main() {
    int N;
    while(scanf("%d",&N),N) {
        pos[0]=P(0,0);
        int min_x=0,max_x=0,min_y=0,max_y=0;
        for(int i=1;i<=N-1;i++) {
            int n,d;
            scanf("%d %d",&n,&d);
            int dx=0,dy=0;
            if(d==0) dx=-1;
            if(d==1) dy=-1;
            if(d==2) dx=1;
            if(d==3) dy=1;
            pos[i]=P(pos[n].first+dx,pos[n].second+dy);
            min_x=min(min_x,pos[i].first);
            max_x=max(max_x,pos[i].first);
            min_y=min(min_y,pos[i].second);
            max_y=max(max_y,pos[i].second);
        }
        printf("%d %d\n",(max_x-min_x+1),(max_y-min_y+1));
    }
}