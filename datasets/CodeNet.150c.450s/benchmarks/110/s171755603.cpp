#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

typedef pair<int,int> P;

#define INF 1000001

int bfs(vector<vector<char> >& mp, P now, P dist, int H, int W) {
    int len[H][W];

    for(int i=0; i<H; ++i) {
        for(int j=0; j<W; ++j) {
            len[i][j]=INF;
        }
    }

    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};

    len[now.first][now.second]=0;
    queue<P> que;
    que.push(now);

    while(!que.empty()) {
        P p=que.front(); que.pop();

        if(p==dist) break;

        for(int i=0; i<4; ++i) {
            int ni=p.first+dy[i];
            int nj=p.second+dx[i];

            if(ni>=0 && ni<H && nj>=0 && nj<W && len[ni][nj]==INF && mp[ni][nj]!='X') {
                len[ni][nj]=len[p.first][p.second]+1;
                que.push(P(ni,nj));
            }
        }
    }

    return len[dist.first][dist.second];
}

int main()
{
    int H,W,N;
    int ans=0;

    cin >> H >> W >> N;

    P pos[N]; // first=H, second=W
    vector<vector<char> > mp; // mp[H][W]

    mp.resize(H+2);

    for(int i=0; i<H; ++i) {
        string instr;
        cin >> instr;
        for(int j=0; j<W; ++j) {
            mp[i].push_back(instr[j]);
            if(instr[j]>='0' && instr[j]<='9') pos[instr[j]-'0']=make_pair(i,j);
            if(instr[j]=='S') pos[0]=make_pair(i,j);
        }
    }

    for(int i=0; i<N; ++i) {
        ans+=bfs(mp,pos[i],pos[i+1],H,W);
    }

    cout << ans << endl;

    return 0;
}