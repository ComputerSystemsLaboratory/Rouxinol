#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct k{
    int nx;
    int ny;
    int power;
    int nowans;
};
int fiemin[15][1003][1003];
int main(){
    int h,w,n;
    const int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};
    char fie[1003][1003];
    for(int i=0;i<15;i++){
        for(int j=0;j<1003;j++){
            for(int k=0;k<1003;k++){
                fiemin[i][j][k]=2100000000;
            }
        }
    }
    for(int j=0;j<1003;j++){
        for(int k=0;k<1003;k++){
            fie[j][k]='X';
        }
    }
    k now;
    queue<k> que;
    scanf("%d %d %d",&h,&w,&n);
    for(int i=0;i<h;i++)
        scanf("%s",&fie[i]);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(fie[i][j]=='S'){
                now.ny=i,now.nx=j,now.power=0,now.nowans=0;
                fie[i][j]='.';
                goto a;
            }
        }
    }
a:
    que.push(now);
    while(1){
        now=que.front(),que.pop();

        //printf("[%d][%d][%d][%d]\n",now.nx,now.ny,now.nowans,now.power);

        if(now.power==n){
            printf("%d\n",now.nowans);
            break;
        }
        /*
        for(int i=0;i<4;i++){
            if(0<=now.nx+dx[i]&&now.nx+dx[i]<w&&0<=now.ny+dy[i]&&now.ny+dy[i]<h){
                if(fie[now.nx+dx[i]][now.ny+dy[i]]==now.power+1+'0'){
                    if(now.nowans+1<fiemin[now.power+1][now.ny+dy[i][now.nx+dx[i]){
                        while(!que.empty())
                            que.pop();
                        now.nx+=dx[i],now.ny+=dy[i],now.power++,now.nowans++;
                        que.push(now);
                        fiemin[now.power][][]=now.nowans;
                    }
                }
            }
        }
        */

        if(0<=now.ny-1){
            if(fie[now.ny-1][now.nx]==now.power+1+'0'){
                if(now.nowans+1<fiemin[now.power+1][now.ny-1][now.nx]){
                        while (!que.empty())
                            que.pop();
                        now.ny--,now.power++,now.nowans++;
                        que.push(now);
                        fiemin[now.power][now.ny][now.nx]=now.nowans;
                        now.ny++,now.power--,now.nowans--;
                }
            }
            else if(fie[now.ny-1][now.nx]!='X'){
                if(now.nowans+1<fiemin[now.power][now.ny-1][now.nx]){
                        now.ny--,now.nowans++;
                        que.push(now);
                        fiemin[now.power][now.ny][now.nx]=now.nowans;
                        now.ny++,now.nowans--;
                }
            }
        }
        if(now.nx+1<w){
            if(fie[now.ny][now.nx+1]==now.power+1+'0'){
                if(now.nowans+1<fiemin[now.power+1][now.ny][now.nx+1]){
                        while (!que.empty())
                            que.pop();
                        now.nx++,now.power++,now.nowans++;
                        que.push(now);
                        fiemin[now.power][now.ny][now.nx]=now.nowans;
                        now.nx--,now.power--,now.nowans--;
                }
            }
            else if(fie[now.ny][now.nx+1]!='X'){
                if(now.nowans+1<fiemin[now.power][now.ny][now.nx+1]){
                        now.nx++,now.nowans++;
                        que.push(now);
                        fiemin[now.power][now.ny][now.nx]=now.nowans;
                        now.nx--,now.nowans--;
                }
            }
        }
        if(now.ny+1<h){
            if(fie[now.ny+1][now.nx]==now.power+1+'0'){
                if(now.nowans+1<fiemin[now.power+1][now.ny+1][now.nx]){
                        while (!que.empty())
                            que.pop();
                        now.ny++,now.power++,now.nowans++;
                        que.push(now);
                        fiemin[now.power][now.ny][now.nx]=now.nowans;
                        now.ny--,now.power--,now.nowans--;
                }
            }
            else if(fie[now.ny+1][now.nx]!='X'){
                if(now.nowans+1<fiemin[now.power][now.ny+1][now.nx]){
                        now.ny++,now.nowans++;
                        que.push(now);
                        fiemin[now.power][now.ny][now.nx]=now.nowans;
                        now.ny--,now.nowans--;
                }
            }
        }
        if(0<=now.nx-1){
            if(fie[now.ny][now.nx-1]==now.power+1+'0'){
                if(now.nowans+1<fiemin[now.power+1][now.ny][now.nx-1]){
                        while (!que.empty())
                            que.pop();
                        now.nx--,now.power++,now.nowans++;
                        que.push(now);
                        fiemin[now.power][now.ny][now.nx]=now.nowans;
                        now.nx++,now.power--,now.nowans--;
                }
            }
            else if(fie[now.ny][now.nx-1]!='X'){
                if(now.nowans+1<fiemin[now.power][now.ny][now.nx-1]){
                        now.nx--,now.nowans++;
                        que.push(now);
                        fiemin[now.power][now.ny][now.nx]=now.nowans;
                        now.nx++,now.nowans--;
                }
            }
        }
    }
    return 0;
}