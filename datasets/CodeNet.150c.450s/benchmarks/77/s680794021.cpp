#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PA;
using namespace std;
#define MAX  999999
int main(){
    while(true){
    int ans = 0;
    vvi v(100, vi (100 ,INF));
    vc c(100,0);vi d(100,0);
    vi x(100,0); vi y(100,0);
        int m ;cin >>m; if(!m) break;
        int tempx = 10,tempy = 10;rep(i,m){cin >> x[i] >> y[i];v[y[i]][x[i]] = 0;}
    int n; cin >> n; rep(i,n) {cin >> c[i] >> d[i];
        if(c[i] == 'N'){
            for(int k =1;k<=d[i];k++)if(v[tempy+k][tempx] == 0){ans++;v[tempy+k][tempx] =INF;}tempy+=d[i];
        }
        if(c[i] == 'E'){
            for(int k =1;k<=d[i];k++)if(v[tempy][tempx+k] == 0) {ans++;v[tempy][tempx+k] = INF;} tempx+=d[i];
        }
        if(c[i] == 'S'){
            for(int k =1;k<=d[i];k++)if(v[tempy-(k)][tempx] == 0){ans++;v[tempy-k][tempx] = INF;}tempy-=d[i];

        }
        if(c[i] == 'W'){
            for(int k =1;k<=d[i];k++)if(v[tempy][tempx-k] == 0){ans++;v[tempy][tempx-k] = INF;}tempx-=d[i];

        }
    }
        if(ans == m)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
}