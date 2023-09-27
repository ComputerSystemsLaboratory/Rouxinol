#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 50
#define INF 9999999

int n,r[MAX][MAX],v[MAX],mini,mn,maxnum,minnum;
bool visit[MAX];

int dijkstra(int s,int g){
    for(int i = 0 ; i < MAX ; i++){
        v[i] = INF;
        visit[i] = false;
    }
    
    v[s] = 0;
    while(true){
        mini = INF;
        for(int i = 0 ; i <= maxnum ; i++){
            if(v[i] < mini && !visit[i]){
                mini = v[i];
                mn = i;
            }
        }
        
        if(mini == INF) break;
        visit[mn] = true;
        
        for(int i = 0; i <= maxnum ; i++){
            int t = r[mn][i]+v[mn];
            if(t < v[i]) v[i] = t;
        }
    }
    
    return v[g];
}


int main(){
    int a,b,c;
    
    while(cin >> n,n){
        for(int i = 0 ; i < MAX ; i++)
            for(int j = 0 ; j < MAX ; j++)
                r[i][j] = INF;
        
        maxnum = 0;
        minnum = INF;
        for(int i = 0 ; i < n ; i++){
            cin >> a >> b >> c;
            r[a][b] = c;
            r[b][a] = c;
            maxnum = max(maxnum,max(a,b));
            minnum = min(minnum,min(a,b));
        }
        
        int mx = INF, e;
        for(int i = 0; i <= maxnum ; i++){
            int sum = 0,num = i;
            for(int j = 0 ; j <= maxnum ; j++){
                if(i == j) continue;
                if(dijkstra(i,j)!=INF) sum += dijkstra(i,j);
            }
            if(sum < mx){
                mx = sum;
                e = num;
            }
        }
        cout << e << ' ' << mx << endl;
    }
    
    return 0;
}