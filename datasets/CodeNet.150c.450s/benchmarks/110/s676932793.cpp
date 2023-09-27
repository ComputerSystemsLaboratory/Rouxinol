#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int h,w,n;
char m[1001][1001];
int dx[4]={0,0,-1,1};//四个方向;
int dy[4]={-1,1,0,0};
bool bj[1001][1001];
int start_x;
int start_y;
int total;
int cnt;
struct Node{
    int x,y;
    int time;
};
bool pd(int a,int b)  //判断是否在矩?范?内;
{
    if(a>=0&&a<h&&b>=0&&b<w)
        return true;
    return false;
}
void BFS(int a)
{
    memset(bj,false,sizeof(bj));
    int i;
    Node start;
   // char nl='0'+a;//?个?酪厂;
    start.x=start_x;
    start.y=start_y;
    start.time=0;
    cnt=0;
    bj[start.x][start.y]=true;
    queue<Node> Q;
    Q.push(start);//起点入?

    while(!Q.empty())
    {
       Node q1;
       q1=Q.front();
       Q.pop();
       if((int)(m[q1.x][q1.y]-'0')==a)
        {
            total+=q1.time;
            start_x=q1.x;
            start_y=q1.y;
            //cout<<q1.time<<endl;
           return ;
        }
       for(i=0;i<4;i++)
       {
           Node q2;
           q2.x=q1.x+dx[i];
           q2.y=q1.y+dy[i];
           if(pd(q2.x,q2.y))
           {
               if(m[q2.x][q2.y]!='X'&&!bj[q2.x][q2.y])
               {
                      //q2.time++;
                       //total++;
                       q2.time=q1.time+1;
                      // cout<<q2.time<<endl;
                    if(!bj[q2.x][q2.y]){

                       bj[q2.x][q2.y]=true;
                        Q.push(q2);
                    }
                }
           }
       }
    }

}
int main()
{

       cin>>h>>w>>n;

        int i,j;
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                cin>>m[i][j];
                if(m[i][j]=='S')
                {
                    start_x=i;
                    start_y=j;
                   // start.time=0;
                }
            }
        }
        total=0;
        for(i=1;i<=n;i++)
            BFS(i);
        cout<<total<<endl;
    return 0;
}