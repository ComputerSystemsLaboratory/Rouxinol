#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <array>
#include <climits>
#include <cassert>
using namespace std;

#define REP(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF INT_MAX/3
#define LINF LLONG_MAX/3
#define MP make_pair
#define PB push_back
#define EB emplace_back
#define ALL(v) (v).begin(),(v).end()
#define debug(x) cout<<#x<<":"<<x<<endl
#define debug2(x,y) cout<<#x","<<#y":"<<x<<","<<y<<endl

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

void mv(vvi& t,int H){
    rep(c,H){
        for(int j=0;j<5;j++){
            for(int i=H-2;i>=0;i--){
                if(t[i+1][j]==0){
                    swap(t[i][j],t[i+1][j]);
                }
            }
        }
    }
}

bool check(vvi& t,int H){
    bool f=false;
    for(int i=0;i<H;i++){
        for(int j=0;j<5;j++){
            int cnt = 0;
            if(t[i][j]==0) continue;
            for(int k=j;k<5;k++){
                if(t[i][j]!=t[i][k]) break;
                cnt++;
            }
            if(cnt>=3){
                int n = t[i][j];
                for(int k=j;k<5;k++){
                    if(n!=t[i][k]) break;
                    t[i][k] = 0;
                }
                f=true;
                break;
            }
        }
    }
    mv(t,H);
    return f;
}

void solve(int H){
    vector<vector<int>> t(H,vi(5));
    int score=0;
    rep(i,H) rep(j,5) cin >> t[i][j];

    rep(i,H) rep(j,5) score += t[i][j];

    while(check(t,H)){
//        cout << endl;
//        rep(i,H){
//            rep(j,5) cout << t[i][j] << " ";
//            cout << endl;
//        }
    }
    
    rep(i,H) rep(j,5) score -= t[i][j];
    cout << score << endl;
}

int main(){
    int H;
    while(cin>>H){
        if(H==0) break;
        solve(H);
    }
}