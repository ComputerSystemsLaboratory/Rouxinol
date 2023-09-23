#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int solve(char ma[105][105], int h, int w, char fruit){
    if(fruit == ma[h][w]) ma[h][w] = '.';
    else return 0;

    solve(ma, h + 1, w,fruit); 
    solve(ma, h - 1, w,fruit); 
    solve(ma, h, w + 1,fruit); 
    solve(ma, h, w - 1,fruit); 

    return 1;
}

int main(){
    int h, w;
    while(cin >> h >> w, h||w){
        int ans = 0;
        char ma[105][105];
        rep(i,105) rep(j,105) ma[i][j] = '.';
        rep(i,h){
            rep(j,w){
                cin >> ma[i + 1][j + 1];
            }
        }

        range(i,1,h + 1){
            range(j,1,w + 1){
                if(ma[i][j] != '.') ans+=solve(ma, i, j, ma[i][j]);
            }
        }

        cout << ans << endl;
    }
}