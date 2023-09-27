#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <cstdio>
#include <string.h>
#include <cstring>

using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)

typedef long long ll;
//各地点の行と列をPairで持たせる
typedef pair<int,int> P;
int y,x,n,nx,ny,nextx,nexty;
int ans = 0;
int counter = 0;
int d[1100][1100];
char c[1100][1100];
int d1[] = {0,0,-1,1};
int d2[] = {1,-1,0,0};
int dc = 0;
char key[] = "S123456789";
P st[10];

int bfs(P,P);

int main(){
    cin >> y >> x >> n;
    REP(i,y){
        cin >> c[i];
    }
    REP(i,y){
        REP(j,x){
            REP(k,n+1) {
                if(c[i][j] == key[k]) st[k] = P(i,j); 
            }
        }
    }
   
    REP(i,n){
        memset(d,-1,sizeof(d));
      
        ans += bfs(st[i],st[i+1]);
      
    }
    cout << ans << endl;
    return 0;
}

int bfs(P s, P g){
    queue<P> que;
    que.push(s);
    d[s.first][s.second] = 0;
    while(que.size()){
        P p = que.front(); que.pop();
        ny = p.first;
        nx = p.second;
        dc = d[ny][nx];
       
        if(p == g) break;
 
        
        REP(i,4){
            nextx = nx + d1[i];
            nexty = ny + d2[i];

            if(nexty < 0 || nexty >= y || nextx < 0 || nextx >= x) continue;
           
            if(c[nexty][nextx] == 'X' || d[nexty][nextx] != -1) continue;
	
            que.push(P(nexty,nextx));
     
            d[nexty][nextx] = dc + 1;
        }
        
    }
    return d[g.first][g.second];

}

