#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<int,int> P;

int main(){
      //declare
      int w,h,n,solve=0;
      P cheese[9];
      int dx[] = {0,1,-1,0},dy[]={1,0,0,-1};
      queue<P> que;
      cin >> h>> w>> n;
      char d[1005][1005];
      int dis[1005][1005];

      //input
      for(int i=0;i<h;i++)
      {
            for(int j=0;j<w;j++)
            {
                  cin>>d[i][j];
                  if('1'<=d[i][j]&&'9'>=d[i][j])
                        cheese[d[i][j]-'0'] = make_pair(i,j);
                  else if(d[i][j]=='S')
                        cheese[0] = make_pair(i,j);
            }
      }
      //for(int i = 0;i<n;i++)cout<<"cheese:"<<cheese[i].first<<' '<<cheese[i].second<<endl;

      //solve
      for(int i=0;i<n;i++)
      {
            queue<P> que;
            for(int a=0;a<h;a++)for(int b=0;b<w;b++)dis[a][b]=-1;
            dis[cheese[i].first][cheese[i].second]=0;
            que.push(cheese[i]);
            while(!que.empty())
            {
                  P p = que.front();que.pop();
                  if(p == cheese[i+1])// judge whether distination
                  {
                        solve += dis[p.first][p.second];
                        break;
                  }
                  for(int j = 0;j < 4;j++)
                  {
                        int nx = p.first + dx[j];
                        int ny = p.second+ dy[j];
                        if(0<=nx&&nx<h&&0<=ny&&ny<w&&d[nx][ny]!='X'&&dis[nx][ny]==-1)
                        {
                              dis[nx][ny] = dis[p.first][p.second]+1;
                              que.push(make_pair(nx,ny));
                        }

                  }
            }
            /*
            cout << endl;
            for(int i = 0;i<h;i++)
            {
                  for(int j= 0;j<w;j++)
                        cout << dis[i][j] << ' ';
                  cout<<endl;
            }
            cout << endl;
            */

      }
      cout << solve << endl;
}