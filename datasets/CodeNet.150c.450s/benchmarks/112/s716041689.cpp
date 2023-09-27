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
typedef pair<int, int> PI;
#define MAX 99999999
int main(){
    int n;
    while(cin>>n,n){
    char array[10000]; rep(i,10000)array[i]=i;
    rep(i,n){
        char c,d; cin>>c>>d;
        array[(int)c]=d;
    }
        int m;
    cin>>m; vc v(m);
    rep(i,m)cin>>v[i];
    rep(i,m){
        if(array[v[i]]==v[i])cout<<v[i];
        else cout<<array[v[i]];
    }cout<<endl;
    }
}