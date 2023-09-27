#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cctype>

#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repi(i,l,n) for(int (i)=(int)(l);(i)<(int)(n);(i)++)
#define d_arr(arr, h, w) rep(i,(h) ){ cout << "["; rep(j,(w) ) { cout << (arr)[i][j] << ", "; } cout << "]" << endl;}
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x);
#define print_a(x) rep(jejeje,x.size()){ cout << x[jejeje] << " "; }

typedef pair<int ,int> P;



int main()
{
    int n,tmp;
    vector<int> x; //[0,n-1]
    cin >> n; //変数の個数
    rep(i,n){
        cin >> tmp;
        x.push_back(tmp);
    }
    unsigned long long int dp[100][21] = {0}; //[0,n-2] [0,20]
    // 総数 : [今いる変数id:0-ori][今までの総和]
    // dp[i][j]:=i番目の数まで使って(足すか引くかして)jを作ることが出来る通りの数

    rep(i,n) rep(j,21) dp[i][j] = 0;

    dp[0][x[0]] = 1;
    rep(i,n-1){
        if( i==0 ) {continue;}
        rep(j,21){
            if( j+x[i] < 21 ){ dp[i][j+x[i]] += dp[i-1][j];}
            if( j-x[i] > -1 ){ dp[i][j-x[i]] += dp[i-1][j];}
        }
    }
    cout << dp[n-2][x[n-1]] << endl;
}