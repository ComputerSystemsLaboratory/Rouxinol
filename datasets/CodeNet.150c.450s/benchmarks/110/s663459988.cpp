#include <iostream>
#include <queue>
#define INF 300000

using namespace std;

typedef pair<int, int> p;

int w, h, n, result, steps;
int visited[1000][1000];
bool map[1000][1000];
p start, last_start, goal, cur, cheese[10];
queue<p> myqueue;

void init(int in){
    start = last_start;

    while(!myqueue.empty()) myqueue.pop();

    for(int i=0; i<w; ++i){
        for(int j=0; j<h; ++j){
            if(map[i][j] == false){
                visited[i][j] = -1;
            }else{
                visited[i][j] = INF;
            }
            goal = cheese[in];
        }
    }
    /*for(int i=0; i<w; ++i){
        for(int j=0; j<h; ++j){

            cout << visited[i][j] << " ";

        }
        cout << endl;
    }*/

    return ;
}

int main(){
    cin >> w >> h >> n;

    char input;
    for(int i=0; i<w; ++i){
        for(int j=0; j<h; ++j){
            cin >> input;
            if(input == 'X') map[i][j] = false;
            else             map[i][j] = true;
            if(input == 'S')
                last_start = make_pair(i, j);
            if(input != 'X' && input != 'S' && input != '.'){
                cheese[input-'0'] = make_pair(i, j);
            }
        }
    }


    result = 0;
    for(int i=1; i<=n; ++i){
        init(i);
        myqueue.push(start);
        visited[start.first][start.second] = 0;

        while(!myqueue.empty()){

            /*for(int k=0; k<w; ++k){
                for(int j=0; j<h; ++j){

                    cout << visited[k][j] << " ";

                }
                cout << endl;
            }
            cout << endl;*/

            cur = myqueue.front();
            myqueue.pop();

            if(cur == goal){
                //cout << "goal " << cur.first << " , " << cur.second << "\n";
                break;
            }

            //visited[cur.first][cur.second] = 0;

            int x = cur.first, y = cur.second;
            if(x-1 >= 0 && visited[x-1][y]==INF){
                myqueue.push(make_pair(x-1, y));
                visited[x-1][y] = visited[x][y]+1;
            }
            if(y-1 >= 0 && visited[x][y-1]==INF){
                myqueue.push(make_pair(x, y-1));
                visited[x][y-1] = visited[x][y]+1;
            }
            if(x+1 < w && visited[x+1][y]==INF){
                myqueue.push(make_pair(x+1, y));
                visited[x+1][y] = visited[x][y]+1;
            }
            if(y+1 < h && visited[x][y+1]==INF){
                myqueue.push(make_pair(x, y+1));
                visited[x][y+1] = visited[x][y]+1;
            }
        }

        result += visited[goal.first][goal.second];
        //cout << visited[goal.first][goal.second] << endl;
        last_start = goal;
    }

    cout << result << endl;
    return 0;
}

