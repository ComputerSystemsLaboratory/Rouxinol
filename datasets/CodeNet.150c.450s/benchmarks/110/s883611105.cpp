#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;
const int INF = 1e9;
const ll INFll = 1e18;
#define put(n) cout<<(n)<<endl
#define Cout(n) cout<<(n)
#define FOR(i,num,N) for(int(i)=(num);(i)<(N);++(i))
#define RFOR(i,num,N) for(int (i)=(num);(i)>(N);--(i))
#define all(v) (v).begin() , (v).end()
#define rall(v) (v).rbegin() , (v).rend()
#define MP make_pair
#define pb(q) push_back(q)
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int H,W,N;
    cin>>H>>W>>N;
    vector<vector<char>> town(H,vector<char>(W));
    vector<vector<int>> step;
    int sy,sx;
    int gy,gx;
    int now = 0;

    FOR(i,0,H){
        FOR(j,0,W){
            cin>>town[i][j];
            if(town[i][j] == 'S'){
                sy = i;
                sx = j;
            }
            if(town[i][j] == '0'+N){
                gy = i;
                gx = j;

            }
        }
    }

    FOR(HP,1,N+1){
        queue<pair<int,int>> Q;
        step.assign(H,vector<int>(W,-1));
        step[sy][sx] = now;
        Q.push(MP(sy,sx));
        bool found = false;
        while(!Q.empty()){
            pair<int,int> P = Q.front(); Q.pop();
            FOR(i,0,4){
                int y = P.first + dy[i];
                int x = P.second + dx[i];

                if(y>=0 && y<H && x>=0 && x<W && town[y][x] != 'X' && step[y][x] == -1){
                    step[y][x] = step[P.first][P.second] + 1;
                    Q.push(MP(y,x));
                    if(town[y][x] == ('0' + HP)){
                        sy = y;
                        sx = x;
                        now = step[y][x];
                        found = true;
                        break;
                    }
                }
            }
            if(found) break;
        }
    }
    
    put(step[gy][gx]);

}
