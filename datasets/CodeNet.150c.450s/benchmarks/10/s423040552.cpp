#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int info[4][3][10] = {0};
        rep(i,n){
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            a--; b--; c--;
            info[a][b][c] += d;
        }
        rep(i,4){
            rep(j,3){
                rep(k,10){
                    cout << ' ' << info[i][j][k];
                }
                cout << endl;
            }
            if(i != 3){
                rep(l,20) cout << '#';
                cout << endl;
            }
        }
    }
}