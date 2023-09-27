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
#include<map>
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
typedef pair<int, int> pii;
#define MAX 99999999
vector<vector<char> >v(101,vc(101,0));
int h,w,ans;
int mx[]={0,0,1,-1};
int my[]={1,-1,0,0};
void dfs(int y,int x,char now){
    v[y][x]='$';
    rep(i,4){
        int tx=x+mx[i]; int ty=y+my[i];
        if(0<=tx&&tx<w&&0<=ty&&ty<h&&v[ty][tx]==now)dfs(ty,tx,now);
    }
}
int main(){
    while(cin>>h>>w,h+w){
        ans=0;
        rep(i,h)rep(j,w)cin>>v[i][j];
        rep(i,h)rep(j,w){if(v[i][j]!='$'){ans++;dfs(i,j,v[i][j]);}}
        cout<<ans<<endl;
    }
}