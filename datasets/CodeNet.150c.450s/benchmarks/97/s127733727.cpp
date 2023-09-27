#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define vi vector<int>
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a),end()
#define debug(x) cout << "debug " << x << endl;
#define NUM 405
using namespace std;

int tile[NUM][NUM];

void solve(int *x, int *y){
    rep(i,NUM){
        rep(j,NUM){
            if(tile[i][j] > - 1){
                tile[i][0] = tile[0][j] = 1;
            }
        }
    }
    rep(i,NUM) if(tile[i][0] > -1) *y = *y + 1;
    rep(i,NUM) if(tile[0][i] > -1) *x = *x + 1;
}

void input(int n, int d, int* tileNum){
    rep(i,NUM){
        rep(j,NUM){
            if(tile[i][j] == n){
                if(d == 0) tile[i][j - 1]  = *tileNum;
                else if(d == 1) tile[i + 1][j] = *tileNum;
                else if(d == 2) tile[i][j + 1] = *tileNum;
                else tile[i - 1][j] = *tileNum;
                break; 
            }
        }
    }
    *tileNum = *tileNum + 1;
}

int main(){
    int n;
    while(cin >> n, n){
        int tileNum = 1;
        rep(i,NUM) rep(j,NUM) tile[i][j] = -1;
        tile[200][200] = 0;
        n--;
        while(n--){
            int num, d;
            cin >> num  >> d;
            input(num, d, &tileNum);
        }
        int wedth, height;
        wedth = height = 0;
        solve(&wedth, &height);
        cout << wedth << ' ' << height << endl;
    }
}