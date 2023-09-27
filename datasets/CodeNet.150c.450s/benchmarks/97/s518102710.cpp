#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define MAX_N 205
int N;
int n[MAX_N];
int d[MAX_N];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int x[MAX_N],y[MAX_N];
int xmin,xmax;
int ymin,ymax;

int main(){
    while(1){
        scanf("%d",&N);
        if(N == 0)break;
        for(int i = 0;i < N-1;i++){
            scanf("%d %d",&n[i],&d[i]);
        }
        xmin=xmax=ymin=ymax=0;
        x[0]=y[0]=0;
        for(int i = 0;i < N-1;i++){
            x[i+1] = x[n[i]]+dx[d[i]];
            y[i+1] = y[n[i]]+dy[d[i]];
            if(x[i+1] < xmin)xmin=x[i+1];
            if(x[i+1] > xmax)xmax=x[i+1];
            if(y[i+1] < ymin)ymin=y[i+1];
            if(y[i+1] > ymax)ymax=y[i+1];
        }

        printf("%d %d\n",xmax-xmin+1,ymax-ymin+1);

    }
}
