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
#define loop(i,s,n) for(int i=s;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
using namespace std;
typedef pair<int, int> pii;
#define MAX 99999999
int main(){
    int n;
    while(cin>>n,n){
    vvi v(n+1,vi(n+1,INF));
    rep(i,n+1)v[i][i]=0;
    int hoge = 0;
    rep(i,n){
        int c;
        pii temp; cin>>temp.first>>temp.second>>c;
        v[temp.first][temp.second]=c;
        v[temp.second][temp.first]=c;
        hoge=max(hoge,max(temp.first, temp.second));
    }
    n=hoge+1;
    loop(k,0,n)
    loop(i,0,n)
    loop(j,0,n){
        v[i][j]=min(v[i][j],v[i][k]+v[k][j]);
    }
    //loop(i, 0, n){loop(j, 0, n)cout<<v[i][j]<<" "; puts("");}
    ll ans=INF,temp=0; int num=12;
    loop(i,0,n){
        loop(j,0,n)temp+=v[i][j];
        if(ans>temp){num=i; ans=temp;}
        temp=0;
    }
    cout<<num<<" "<<ans<<endl;
    }
}