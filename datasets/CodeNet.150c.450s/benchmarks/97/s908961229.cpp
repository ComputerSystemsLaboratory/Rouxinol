#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
const int dxy[]={-1,0,1,0,-1};
struct data{
    int x,y;
    data(){}
    data(int _x,int _y):x(_x),y(_y){}
};
int sx,sy,lx,ly;
void update(data d){
    sx=min(sx,d.x);
    sy=min(sy,d.y);
    lx=max(lx,d.x);
    ly=max(ly,d.y);
}
int main(){
    int n;
    while(scanf("%d",&n),n){
        sx=sy=lx=ly=0;
        vector<data>V(n);
        V[0]=data(0,0);
        for(int i=1;i<n;i++){
            int p,d;
            scanf("%d%d",&p,&d);
            data prev=V[p],next;
            next=data(prev.x+dxy[d],prev.y+dxy[d+1]);
            update(next);
            V[i]=next;
        }
        printf("%d %d\n",lx-sx+1,ly-sy+1);
    }
}