#include <iostream>
#include <deque>
#include <cstring>
#include <algorithm>

using namespace std;

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

int main(){
    int n,m;
    while(cin >> m >> n){
        if((n|m) == 0) break;
        bool field[n+2][m+2];
        bool visited[n+2][m+2];
        deque<pair<int,int> > q;
        int tmp;
        int ret = 0;

        memset(field, false, sizeof(field));
        memset(visited, false, sizeof(visited));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> tmp;
                field[i][j] = tmp?true:false;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(visited[i][j] == false && field[i][j] == true){
                    q.push_back(make_pair(i,j));
                    ret++;
                }
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop_front();
                    if(visited[x][y] == true){
                        continue;
                    }else{
                        visited[x][y] = true;
                    }
                    for(int k=0;k<8;k++){
                        if(field[x+dx[k]][y+dy[k]] == true &&
                           visited[x+dx[k]][y+dy[k]] == false){
                            q.push_back(make_pair(x+dx[k], y+dy[k]));
                        }
                    }
                }
            }
        }
        cout << ret << endl;
    }
}