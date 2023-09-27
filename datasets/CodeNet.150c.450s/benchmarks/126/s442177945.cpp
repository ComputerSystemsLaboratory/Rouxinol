#include <cstdio>
#define inf -99999999
using namespace std;
int cnt(int x,int y);
int cross[17][17];
int main(void){
    int a,b,n,i,j,k,x,y;
    for(j=0;j<6;j++){
        scanf("%d%d",&a,&b);
        if(a==0) return 0;
        scanf("%d",&n);
        for(i=1;i<17;i++) for(k=1;k<17;k++) cross[i][k]=inf;
        for(i=0;i<n;i++){
            scanf("%d%d",&x,&y);
            cross[x][y]=0;
        }
        printf("%d\n",cnt(a,b));
    }
}
int cnt(int x,int y){
    if(x+y==2){
        return 1;
    }else if(cross[x][y]-inf){
        return cross[x][y];
    }else if(x==1){
        return cnt(x,y-1);
    }else if(y==1){
        return cnt(x-1,y);
    }else return cnt(x,y-1)+cnt(x-1,y);
}