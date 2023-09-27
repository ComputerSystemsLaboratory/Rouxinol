#include <iostream> 
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <deque>  
#include <iomanip>

using namespace std;

using ll = long long;
#define INF 1e9
#define MOD 1e9 + 7
#define rep(i, n) for(int i = 0; i < n; i++)
#define loop(i, a, n) for(int i = a; i < n; i++)
#define all(in) in.begin(), in.end()
struct place{
    int x;
    int y;
    int num;
};

int move(char direction, int value){
    if(direction == 'N') return value;
    if(direction == 'S') return -value;
    if(direction == 'W') return -value;
    if(direction == 'E') return value;
    return 0;
}
int main(){
    int N;
    while(true){
        cin >> N;
        if(N == 0) break;
        pair<int, int> juel[N];
        rep(i, N) cin >> juel[i].first >> juel[i].second;
        int M; cin >> M;
        pair<char, int> order[M];
        rep(i, M) cin >> order[i].first >> order[i].second;
        place state = {10, 10, 0};
        rep(i, M){
            const char direction = order[i].first;
            const int value = order[i].second;
            if(direction == 'N'){
                for(int y = 1; y <= value; y++){
                    rep(k, N){
                        if(state.x == juel[k].first && state.y + y == juel[k].second){
                            state.num++;
                            juel[k].first = -2, juel[k].second = -2;
                        }
                    }
                }
                state.y +=  move(direction, value);
            }
            if(direction == 'S'){
                for(int y = 1; y <= value; y++){
                    rep(k, N){
                        if(state.x == juel[k].first && state.y - y == juel[k].second){
                            state.num++;
                            juel[k].first = -2, juel[k].second = -2;
                        }
                    }
                }
                state.y += move(direction, value);
            }
            if(direction == 'E'){
                for(int x = 1; x <= value; x++){
                    rep(k, N){
                        if(state.x + x == juel[k].first && state.y == juel[k].second){
                            state.num++;
                            juel[k].first = -2, juel[k].second = -2;
                        }
                    }
                }
                state.x += move(direction, value);
            }
            if(direction == 'W'){
                for(int x = 1; x <= value; x++){
                    rep(k, N){
                        if(state.x - x == juel[k].first && state.y == juel[k].second){
                            state.num++;
                            juel[k].first = -2, juel[k].second = -2;
                        }
                    }
                }
                state.x += move(direction, value);
            }
        }
        if(state.num == N) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
