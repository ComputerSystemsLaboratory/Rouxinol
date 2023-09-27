#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
typedef long long i64;
int main(){
    while (true) {
        int n;
        cin >> n;
        if(n==0) break;
        int currentx=10,currenty=10;
        bool treasure[21][21];
        rep(i,21){
            rep(j,21){
                treasure[i][j]=false;
            }
        }
        rep(i,n){
            int x,y;
            cin >> x >>y;
            treasure[x][y]=true;
        }
        int count=0;
        int m;
        cin >> m;
        rep(i,m){
            char direction;
            int step;
            cin >> direction >> step;
            repi(j,1,step+1){
                switch (direction) {
                    case 'E':
                        currentx++;
                        break;
                    case 'N':
                        currenty++;
                        break;
                    case 'S':
                        currenty--;
                        break;
                    case 'W':
                        currentx--;
                        break;
                }
                if(treasure[currentx][currenty]){
                    count++;
                    treasure[currentx][currenty]=false;
                }
            }
        }
        cout << (count==n ? "Yes" : "No") << endl;
    }
    return 0;
}