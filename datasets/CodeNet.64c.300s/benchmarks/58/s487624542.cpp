#include <iostream>
#include <queue>

using namespace std;

typedef pair<int, int> p;

int w, h;
int movement[3] = {-1, 0, 1};
char map[100][100], cur, dump;

void dfs(p t){
    int curX = t.first, curY = t.second;
    for(int x=0; x<3; ++x){
        for(int y=0; y<3; ++y){
            if(movement[x]!=0 && movement[y]!=0) continue;
            if(curX+movement[x]>=0 && curY+movement[y]>=0 &&
                curX+movement[x]<w && curY+movement[y]<h &&
                map[curX+movement[x]][curY+movement[y]]==cur){
                map[curX+movement[x]][curY+movement[y]]='E';
                dfs(make_pair(curX+movement[x], curY+movement[y]));
            }
        }
    }
}

int main(){
    while(cin >> w >> h){
        if(!w && !h) break;

        for(int i=0; i<w; ++i){
            for(int j=0; j<h; ++j){
                cin >> map[i][j];
            }
        }


        /// bfs
        /*queue<p> myqueue;
        int counter = 0;

        for(int i=0; i<w; ++i){
            for(int j=0; j<h; ++j){
                if(map[i][j]=='E') continue;
                cur = map[i][j];
                p t = make_pair(i, j);
                myqueue.push(t);
                while(!myqueue.empty()){
                    t = myqueue.front();
                    myqueue.pop();
                    map[t.first][t.second] = 'E';
                    int curX = t.first, curY = t.second;
                    for(int x=0; x<3; ++x){
                        for(int y=0; y<3; ++y){
                            if(movement[x]!=0 && movement[y]!=0) continue;
                            if(curX+movement[x]>=0 && curY+movement[y]>=0 &&
                                curX+movement[x]<w && curY+movement[y]<h &&
                                map[curX+movement[x]][curY+movement[y]]==cur){
                                myqueue.push(make_pair(curX+movement[x], curY+movement[y]));
                            }
                        }
                    }

                }

                counter++;
            }
        }*/

        /// dfs
        int counter = 0;

        for(int i=0; i<w; ++i){
            for(int j=0; j<h; ++j){
                if(map[i][j]=='E') continue;
                cur = map[i][j];
                map[i][j]='E';
                dfs(make_pair(i, j));
                counter++;
            }
        }

        /// printf
        cout << counter << endl;
    }
    return 0;
}

