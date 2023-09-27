#include <iostream>
#include <vector>
#include <set>
#include <deque>
#include <map>
#include <iomanip>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <utility>
using namespace std;
int ky[8] = {-1,1,-2,2,-2,2,-1,1}; 
int kx[8] = {-2,-2,-1,-1,1,1,2,2};
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int ddy[8] = {-1,0,1,-1,1,-1,0,1};
int ddx[8] = {-1,-1,-1,0,0,1,1,1};
typedef long long ll;
#define pi pair
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define rep1(i,a,b) for(int i = a; i < b; i++)
#define rep2(i,a,b) for(int i = a; i <= b; i++) 
#define INF 99999999999999999
const double PI = acos(-1.0);
int N,M;
vector<int> adj[100001];
int d[100001];
int a,b;
queue<int> q;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> N >> M;
    rep1(i,0,M){
        cin >> a >> b;
        adj[a].PB(b);
        adj[b].PB(a);
    }

    rep2(i,1,N) d[i] = -1;
    q.push(1);
    
    while(!q.empty()){
        int here = q.front(); q.pop();
        
        rep1(i,0,(int)adj[here].size()){
            int next = adj[here][i];
            if(d[next] != -1) continue;
            d[next] = here;
            q.push(next);
        }
    }

    rep2(i,2,N) if(d[i] == -1){
        cout << "No";
        return 0;
    }

    cout << "Yes\n";
    rep2(i,2,N) cout << d[i] << '\n';
    return 0;
}