#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<utility>

using namespace std;

int solve(const vector<string> mp, vector<pair<int,int>> points, int h, int w, int s, int e) {
    int cx,cy;
    int dx[] = {-1,0,1,0};
    int dy[] = {0,1,0,-1};
    vector<vector<int>> memo(w,vector<int>(h,0)); //(x,y)???????????¢
    queue<pair<int,int>> Q;
    Q.push(points[s]);
    while (!Q.empty()) {
        pair<int,int> q;
        q = Q.front();Q.pop();
        if (q == points[e]) {
            return memo[q.first][q.second];
        }
        for (int dir=0; dir<4; dir++) {
            cx = q.first + dx[dir];
            cy = q.second + dy[dir];
            if (cx<0 || cx>w-1 || cy<0 || cy>h-1 || mp[cy][cx] == 'X' || memo[cx][cy] != 0) continue;
            Q.push(make_pair(cx,cy));
            memo[cx][cy] = memo[q.first][q.second] + 1;
        }
    }
    return -1;
}

int main(){
    int h,w,n,num;
    int dx[] = {-1,0,1,0,};
    int dy[] = {0,1,0,-1,};
    long long sum=0;
    cin >> h >> w >> n;
    vector<string> mp;
    string tmp;
    vector<pair<int,int>> points(n+1);
    for (int i= 0; i<h; i++) {
        cin >> tmp;
        for (int j=0; j<w; j++) {
            if (tmp[j] == 'S') {
                points[0] = make_pair(j,i);
            } else if(tmp[j] != '.' && tmp[j] != 'X') {
                num = atoi(&tmp[j]);
                points[num] = make_pair(j,i);
            } 
        }
        mp.push_back(tmp);
    }
    for(int i = 1; i<= n ; i++) {
        sum += solve(mp,points,h,w,i-1,i);
    }
    cout << sum << endl;
    return 0;
}