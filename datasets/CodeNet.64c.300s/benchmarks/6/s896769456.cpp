#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#define rep(i,n) Rep(i,0,n)
#define Rep(i,k,n) for(int i=k ; i<n ; i++)
#define rep1(i,n) for(int i=1 ; i<=n ; i++)
#define vi vector<int>
#define Sort(v) sort(v.begin(),v.end())
#define Reverse(v) reverse(v.begin(),v.end())

//const int MOD = 1000000007;
//const int INF = 1<<30;
using namespace std;



int main(){
    int pp[4][3][10];
    
    //初期化
    rep(i,4){
        rep(j,3){
            rep(k,10) pp[i][j][k] = 0;
        }
    }
    
    int n;
    cin >> n;
    
    //人数計算
    rep(i,n){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
        pp[a-1][b-1][c-1] += d;
    }
    
    //表示
    rep(i,3){
        rep(j,3){
            rep(k,10){
                cout <<" " << pp[i][j][k];
            }
            cout << endl;
        }
        rep(i,20) cout << "#";
        cout << endl;
    }
    
    rep(i,3){
        rep(j,10){
            cout <<" " << pp[3][i][j];
        }
        cout << endl;
    }
    
}




