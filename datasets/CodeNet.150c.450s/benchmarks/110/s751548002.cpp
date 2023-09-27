#include <iostream>
#include <string>
#include <cstring>
#include <queue>

using namespace std;

typedef pair<int,int> pint;
const int dx[]={1,0,-1,0};
const int dy[]={0,1,0,-1};
string mp[1000];
int visit[1000][1000];

int main(){
    int h,w,n,cx,cy,ans=0;
    cin>>h>>w>>n;
    for(int i=0;i<h;++i){
        cin>>mp[i];
        if(mp[i].find('S')!=string::npos){
            cy=i;cx=mp[i].find('S');
        }
    }    
    for(int i=1;i<=n;++i){
        memset(visit,0,sizeof(visit));
        visit[cy][cx]=1;
        queue<pint> q;
        q.push(make_pair(cx,cy));
        while(!q.empty()){
            pint pi=q.front();q.pop();
            cx=pi.first;cy=pi.second;
            int vc=visit[cy][cx];
            if(mp[cy][cx]==i+'0'){
                ans+=vc-1;break;
            }
            for(int j=0;j<4;++j){
                int tx=cx+dx[j];int ty=cy+dy[j];
                if(tx>=0&&ty>=0&&tx<w&&ty<h&&visit[ty][tx]==0&&mp[ty][tx]!='X'){
                    q.push(make_pair(tx,ty));
                    visit[ty][tx]=vc+1;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}