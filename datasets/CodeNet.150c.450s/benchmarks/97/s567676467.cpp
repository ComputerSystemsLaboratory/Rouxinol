#include <cstdio>
using namespace std;

int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}
int ar[200][2],n;
int m[4][2]={{0,-1},{1,0},{0,1},{-1,0}};
int main(){
    ar[0][0]=225;
    ar[0][1]=225;
    while(scanf("%d",&n),n){
        int minx=225,miny=225,maxx=225,maxy=225;
        for(int i=1;i<n;i++){
            int x,y,a,b;
            scanf("%d%d",&a,&b);
            x=ar[a][0]+m[b][0];
            y=ar[a][1]+m[b][1];
            ar[i][0]=x;
            ar[i][1]=y;
            minx=min(x,minx);
            miny=min(y,miny);
            maxx=max(x,maxx);
            maxy=max(y,maxy);
        }
        printf("%d %d\n",maxy-miny+1,maxx-minx+1);
    }
    return 0;
}