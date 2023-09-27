#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <tuple>
#include <set>
#include <stack>
#include <queue>
#define REP(i, n) for(LL i = 0;i < n;i++)
#define REPR(i, n) for(LL i = n;i >= 0;i--)
#define FOR(i, m, n) for(LL i = m;i < n;i++)
#define FORR(i, m, n) for(LL i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()
#define out(x, y) cout << x << " " << y << endl

#define INF 999999999
#define MOD 1000000007
using namespace std;
typedef long long LL;
//typedef LL int;
typedef pair<int, int> P;
typedef pair<LL, LL> LP;
typedef pair<int, P> PP;
typedef pair<LL, LP> LPP;
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main(){
    int w, h;
    while(cin >> w >> h, w + h){
        int c[51][51];
        REP(i, h){
            REP(j, w){
            cin >> c[i][j];
            }
        }

        int ans = 0;

        REP(i, h){
            REP(j, w){
                if(c[i][j] == 0) continue;
                else if(c[i][j] == 1){
                    queue<int> que;
                    que.push(i); que.push(j);
                    while(!que.empty()){
                        int x, y;
                        y = que.front(); que.pop();
                        x = que.front(); que.pop();
                        
                        // c[y][x] = 0;
                        
                        //??????
                        if(y-1 >= 0 && y-1 < h && x-1 >= 0 && x-1 < w && c[y-1][x-1] == 1){
                            que.push(y-1); que.push(x-1);
                            c[y-1][x-1] = 0;
                        }
                        //???
                        if(y-1 >= 0 && y-1 < h && x >= 0 && x < w && c[y-1][x] == 1){
                            que.push(y-1); que.push(x);
                            c[y-1][x] = 0;
                        }
                        //??????
                        if(y-1 >= 0 && y-1 < h && x+1 >= 0 && x+1 < w && c[y-1][x+1] == 1){
                            que.push(y-1); que.push(x+1);
                            c[y-1][x+1] = 0;
                        }
                        //???
                        if(y >= 0 && y < h && x-1 >= 0 && x-1 < w && c[y][x-1] == 1){
                            que.push(y); que.push(x-1);
                            c[y][x-1] = 0;
                        }
                        //???
                        if(y >= 0 && y < h && x+1 >= 0 && x+1 < w && c[y][x+1] == 1){
                            que.push(y); que.push(x+1);
                            c[y][x+1] = 0;
                        }
                        //??????
                        if(y+1 >= 0 && y+1 < h && x-1 >= 0 && x-1 < w && c[y+1][x-1] == 1){
                            que.push(y+1); que.push(x-1);
                            c[y+1][x-1] = 0;
                        }
                        //???
                        if(y+1 >= 0 && y+1 < h && x >= 0 && x < w && c[y+1][x] == 1){
                            que.push(y+1); que.push(x);
                            c[y+1][x] = 0;
                        }
                        //??????
                        if(y+1 >= 0 && y+1 < h && x+1 >= 0 && x+1 < w && c[y+1][x+1] == 1){
                            que.push(y+1); que.push(x+1);
                            c[y+1][x+1] = 0;
                        }
                    }
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}