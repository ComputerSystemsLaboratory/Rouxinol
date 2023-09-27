#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 11
#define INF 9999999

int n,r[MAX][MAX],v[MAX],mini,mn,maxnum,minnum;
bool visit[MAX];

int dijkstra(int s){
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
            v[i] = min(v[i],t);
        }
    }
    
    int sum = 0;
    for(int i = 0 ; i <= maxnum ; i++){
        sum += v[i];
    }
    
    return sum;
}


int main(){
    int a,b,c;

    while(cin >> n,n){
        
        for(int i = 0 ; i < MAX ; i++)
            for(int j = 0 ; j < MAX ; j++)
                r[i][j] = INF;
        
        maxnum = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> a >> b >> c;
            r[a][b] = c;
            r[b][a] = c;
            maxnum = max(maxnum,max(a,b));
        }

        int mx = INF, e;
        for(int i = 0 ; i <= maxnum ; i++){
            int val = mx;
            mx = min(mx,dijkstra(i));
            if(val > mx) e = i;
        }
        cout << e << " " << mx << endl;
    }
    
    return 0;
}