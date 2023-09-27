#include <bits/stdc++.h>
using namespace std;
bool gem[21][21];
int main() {
    int N;
    while(scanf("%d",&N),N) {
        memset(gem,0,sizeof(gem));
        for(int i=0;i<N;i++) {
            int x,y;
            scanf("%d %d",&x,&y);
            gem[x][y]=1;
        }
        int M;
        int X=10,Y=10;
        int sum=0;
        scanf("%d",&M);
        for(int i=0;i<M;i++) {
            char d[2];
            int l;
            scanf("%s %d",d,&l);
            if(d[0]=='N') {
                for(int i=1;i<=l;i++) if(gem[X][Y+i]) {gem[X][Y+i]=0;sum++;}
                Y+=l;
            }
            if(d[0]=='E') {
                for(int i=1;i<=l;i++) if(gem[X+i][Y]) {gem[X+i][Y]=0;sum++;}
                X+=l;
            }
            if(d[0]=='S') {
                for(int i=1;i<=l;i++) if(gem[X][Y-i]) {gem[X][Y-i]=0;sum++;}
                Y-=l;
            }
            if(d[0]=='W') {
                for(int i=1;i<=l;i++) if(gem[X-i][Y]) {gem[X-i][Y]=0;sum++;}
                X-=l;
            }
        }
        if(sum==N) printf("Yes\n"); else printf("No\n");
     }
}