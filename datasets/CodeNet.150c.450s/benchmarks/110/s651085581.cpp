#include<iostream>
#include<queue>
#define fi first
#define se second
using namespace std;
int dy[4]={0,0,-1,1},dx[4]={1,-1,0,0};
int X,Y,N;
char field[1000][1001];
pair<int,int> time1[1000][1001];
struct point{
    int y,x,t,n;
    point(int y_,int x_,int t_,int n_){
        y=y_;x=x_;t=t_;n=n_;
    }
};
int bfs(int y,int x);
int main(){
    cin>>Y>>X>>N;
    int rep;
    for(int i=0;i<Y;i++)cin>>field[i];
    for(int i=0;i<Y;i++){
        for(int j=0;j<X;j++){
            time1[i][j].fi=time1[i][j].se=-1;
        }
    }
    for(int i=0;i<Y;i++){
        bool flag=false;
        for(int j=0;j<X;j++){
            if(field[i][j]=='S'){
                rep=bfs(i,j);
                flag=true;
                break;
            }
        }
        if(flag)break;
    }
    cout<<rep<<endl;
    return 0;

}

int bfs(int y,int x){
    point start=point(y,x,0,0);
    queue<point>Q;
    Q.push(start);
    while(Q.size()){

        point a=Q.front();
        Q.pop();
        if(a.y<0 || a.y>=Y ||a.x<0||a.x>=X)continue;

        if(field[a.y][a.x]=='X')continue;

        if(a.n+1==field[a.y][a.x]-'0')a.n++;

        if(a.n>time1[a.y][a.x].se){
            time1[a.y][a.x].fi=a.t;
            time1[a.y][a.x].se=a.n;
        }else if(a.n==time1[a.y][a.x].se&&a.t<time1[a.y][a.x].fi){
            time1[a.y][a.x].fi=a.t;
        }else continue;

        if(a.n==N){
            return a.t;
        }


        for(int i=0;i<4;i++){
            point next=point(a.y+dy[i],a.x+dx[i],a.t+1,a.n);
            Q.push(next);
        }
    }
}