//According to all known laws of aviation, there is no way that a bee should be able to fly.
//Its wings are too small to get its fat little body off the ground. The bee, of course, flies anyway.
//Because bees don't care what humans think is impossible.
#include <bits/stdc++.h>
#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define endl "\n"
 
using namespace std ;
using bigint = long long int ;
using vi = vector<int> ;
using vll = vector<long long int> ;
vi adj[100005] ;
bool visited[100005] ;
bigint dist[100005] ;
int par[100005] ;
void bfs( int src ){
    visited[src] = 1 ;
    dist[src] = 0 ;
    par[src] = -1 ;
    queue<int> q ;q.push(src) ;
    while( !q.empty() ){
        int v = q.front() ;
        q.pop() ;
        for( int u : adj[v] ){
            if( !visited[u] ){
                dist[u] = dist[v] + 1 ;
                q.push(u) ;
                visited[u] = 1 ;
                par[u] = v ;
            }
        }
    }
}

int main(){
    FAST_IO ;
    memset(dist, -1, sizeof(dist)) ;
    int N , M ; cin >> N >> M ;
    for( int i = 0 ; i < M ; i++ ){
        int x , y ; cin >> x >> y ;
        adj[x].push_back(y) ;
        adj[y].push_back(x) ;
    }
    bfs(1) ;
    bool flag = true ;
    for( int i = 2 ; i <= N ; i++ ){
        if( dist[i] == -1 ){
            flag = false ;
            break ;
        }
    }
    if( !flag )
        cout << "No" << endl ;
    else{
        cout << "Yes" << endl ;
        for( int i = 2 ; i <= N ; i++ )
            cout << par[i] << endl ;
    }
    return 0 ;
}
