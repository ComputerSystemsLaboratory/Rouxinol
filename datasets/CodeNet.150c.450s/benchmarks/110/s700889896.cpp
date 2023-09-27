#include <iostream>
#include<queue>
#include<string.h>
using namespace std;
int main(){
    queue <int> q;
    int h,w,n,cnt;
    long ans=0;
    char map[1000][1000];
    int d[1000][1000];
    int x,fx,mx[]={0,1,0,-1};
    int y,fy,my[]={1,0,-1,0};
    cin>>h>>w>>n;
    for(int i=0;i<h;i++){
        for(int o=0;o<w;o++){
            cin>>map[i][o];
            if(map[i][o]=='S'){
                q.push(i);
                q.push(o);
                x=o;
                y=i;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cnt=1;
        memset(d,-1,sizeof(d));
        d[y][x]=0;
        while(!q.empty()){
            y=q.front();
            q.pop();
            x=q.front();
            q.pop();
            if(map[y][x]==i+48){
                ans=ans+d[y][x];
                while(!q.empty()){
                    q.pop();
                }
                q.push(y);
                q.push(x);
                break;
            }
            for(int o=0;o<4;o++){
                fy=y+my[o];
                fx=x+mx[o];
                if(fy>=0&&fy<h&&fx>=0&&fx<w&&map[fy][fx]!='X'&&d[fy][fx]==-1){
                    d[fy][fx]=d[y][x]+1;
                    q.push(fy);
                    q.push(fx);
                }
            }
        }
    }
    cout<<ans<<endl;
}