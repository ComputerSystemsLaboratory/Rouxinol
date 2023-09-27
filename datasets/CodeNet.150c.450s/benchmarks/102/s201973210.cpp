#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int main(){
    int W,H,x0,y0;
    char t[20][20];
    bool visit[20][20];
    const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
    typedef pair<int,int>P;
    queue<P>Q;
    while(cin>>W>>H){
        if(W==0||H==0)break;
        for(int i=0;i<H;++i){
            for(int j=0;j<W;++j){
                cin>>t[i][j];
                if(t[i][j]=='@'){
                    x0=j;
                    y0=i;
                }
                visit[i][j]=true;
            }
        }
        int sum=0;
        Q.push(P(x0,y0));
        visit[y0][x0]=false;
        while(!Q.empty()){
            int srcx=Q.front().first;
            int srcy=Q.front().second;
            Q.pop();
            sum++;
            for(int i=0;i<4;++i){
                int curx=srcx+dx[i];
                int cury=srcy+dy[i];
                if(t[cury][curx]=='#') continue;
                if(curx<0||curx>=W||cury<0||cury>=H) continue;
                if(!visit[cury][curx]) continue;
                visit[cury][curx]=false;
                Q.push(P(curx,cury));
            }
            
        }
        cout<<sum<<endl;
    }
}