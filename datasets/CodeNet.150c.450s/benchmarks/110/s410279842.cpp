#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
const int Max_n=1100;

int n,m,d;
struct Node{
    int x,y,d;
    Node(int xx,int yy,int dd):x(xx),y(yy),d(dd){}
};
char s[Max_n][Max_n];
bool vis[Max_n][Max_n];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

Node bfs(int x1,int y1,int k){
    memset(vis,0,sizeof(vis));
    queue<Node>que;
    que.push(Node(x1,y1,0));
    vis[x1][y1]=1;
    while(!que.empty()){
        Node node=que.front();que.pop();
        int x=node.x,y=node.y;
        if(k==s[x][y]-'0')return node;
        int d=node.d;
        for(int i=0;i<4;i++){
            int X=x+dx[i],Y=y+dy[i];
            if(!vis[X][Y]&&(s[X][Y]=='S'||s[X][Y]=='.'||(s[X][Y]>='1'&&s[X][Y]<='9'))){
                vis[X][Y]=1;
                que.push(Node(X,Y,d+1));
            }
        }
    }
}

int main()
{
    while(~scanf("%d%d%d",&n,&m,&d)){
        memset(s,0,sizeof(s));
        for(int i=1;i<=n;i++)scanf("%s",s[i]+1);
        int x,y;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
            if(s[i][j]=='S'){x=i;y=j;}
        }
        int sum=0;
        for(int i=1;i<=d;i++){
            Node node=bfs(x,y,i);
            sum+=node.d;
            x=node.x,y=node.y;
        }
        printf("%d\n",sum);
    }
    return 0;
}


