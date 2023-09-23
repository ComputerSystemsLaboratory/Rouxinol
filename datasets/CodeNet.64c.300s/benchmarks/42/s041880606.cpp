#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int dxy[5]={0,1,0,-1,0};
int main(){
    bool fld[30][30];
    int n,m;
    while(scanf("%d",&n),n){
        fill_n(fld[0],900,false);
        for(int i=0;i<n;i++){
            int y,x;
            scanf("%d%d",&x,&y);
            fld[y][x]=true;
        }
        scanf("%d",&m);
        int cnt=0;
        int y=10,x=10;
        while(m--){
            char d;
            int t;
            scanf(" %c %d",&d,&t);
            int D;
            switch(d){
            case 'N':
                D=0;
                break;
            case 'E':
                D=1;
                break;
            case 'S':
                D=2;
                break;
            default:
                D=3;
            }
            for(int i=0;i<t;i++){
                y+=dxy[D+1];x+=dxy[D];
                if(fld[y][x]){
                    cnt++;
                    fld[y][x]=false;
                }
            }
        }
        if(n==cnt)puts("Yes");
        else puts("No");
    }
    return 0;
}