#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;

#define sz size()
#define pb push_back
#define clr(a,b) memset(a,b,sizeof(a))
#define rep(i,a,n) for(int i = (a);i < (n);i++)
#define lep(i,a,n) for(int i = (a);i <= (n);i++)
#define per(i,a,n) for(int i = (a);i > (n);i--)
#define pel(i,a,n) for(int i = (a);i >= (n);i--)
#define endl "\n"
#define print(X) cout << X << endl;
#define INF 1e+9
#define INFL 1e+18

#define W 400
#define H 400

ll n,m,l;
int field[W][H];
ll dp[300][300],d[2100010];

typedef struct point{
    int x,y;
}point;

// vector<point> vec;
int point_num;

void init(){
    clr(field,-1);
    // vec.clear();
    point_num = 1;
    field[W/2][H/2] = 0;
    // vec.pb(point{100,100});
}

void put(point &p){
    point ins;
    bool f = false;
    rep(i,0,W){
        rep(j,0,H){
            if(field[i][j] == p.x){
                ins.x = i;
                ins.y = j;
                f = 1;
                break;
            }
        }
        if(f)break;
    }

    // if(!f)print("NO");
    if(p.y == 0)field[ins.x-1][ins.y] = point_num;
    if(p.y == 1)field[ins.x][ins.y-1] = point_num;
    if(p.y == 2)field[ins.x+1][ins.y] = point_num;
    if(p.y == 3)field[ins.x][ins.y+1] = point_num;
    point_num++;
}

void func(point &ans){
    

    int mina,minb,maxa,maxb;
    mina = minb = maxa = maxb = -1;

    int a[W],b[W];
    clr(a,0);
    clr(b,0);

    rep(i,0,W){
        rep(j,0,W){
            if(field[i][j] != -1){
                a[i]++;
                b[j]++;
            }
        }
    }
    rep(i,0,W){
        if(a[i] != 0){
            if(mina == -1)mina = i;
            maxa = i;
        }
        if(b[i] != 0){
            if(minb == -1)minb = i;
            maxb = i;
        }
    }

    ans.x = maxa - mina +1;
    ans.y = maxb - minb + 1;
}

void deb(){
    rep(i,0,400){
        rep(j,0,400){
            cout << field[i][j] << "";
        }
        puts("");
    }
}

int main(){
    int n;
    while(cin >> n,n != 0){
        point ans;
        init();
        point p;
        rep(i,0,n-1){
            cin >> p.x >> p.y;
            put(p);
        }
        func(ans);
        // deb();
        cout << ans.x << " " << ans.y << endl;
    }
    return 0;
}
