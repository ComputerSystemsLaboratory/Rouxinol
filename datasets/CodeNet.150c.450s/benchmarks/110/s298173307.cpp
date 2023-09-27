#include <bits/stdc++.h>
using namespace std;

struct coor{
    int y,x;
    coor(){}
    coor(int Y,int X) : y(Y), x(X){}
    bool operator!=(coor a){return y!=a.y||x!=a.x;}
};

int main(){
    int h,w,n; cin>>h>>w>>n;
    vector<coor> check(n+1);
    vector<vector<int>> field(h+2,vector<int>(w+2,1));
    for(int i=1;i<=h;i++) for(int j=1;j<=w;j++){
        char c; cin>>c;
        if(c!='X') field[i][j]=0;
        if(c=='S') check[0]=coor(i,j);
        if(isdigit(c)) check[c-'0']=coor(i,j);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        auto copy=field;
        auto start=check[i];
        auto goal=check[i+1];
        queue<pair<int, coor>> que;
        que.push(make_pair(0,start));
        while(que.front().second!=goal){
            auto dist=que.front().first;
            auto cur=que.front().second;
            que.pop();
            if(copy[cur.y][cur.x]==1) continue;
            copy[cur.y][cur.x]=1;
            for(int j=0;j<4;j++){
                int v[]={1,0,-1,0,1};
                que.push(make_pair(dist+1,coor(cur.y+v[j], cur.x+v[j+1])));
            }
        }
        ans+=que.front().first;
    }
    cout<<ans<<endl;
	return 0;
}