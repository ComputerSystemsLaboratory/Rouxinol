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
    int n,m;
    cin >> n >> m;
    
    int a[n+10][m+10],b[m+10];
    
    //行列
    rep1(i,n){
        rep1(j,m){
            cin >> a[i][j];
        }
    }
    
    //列ベクトル
    rep1(i,m) cin >>b[i];
    
    //計算と表示
    rep1(i,n){
        int c = 0;
        rep1(j,m){
            c += a[i][j]*b[j];
        }
        cout << c << endl;
    }
}






