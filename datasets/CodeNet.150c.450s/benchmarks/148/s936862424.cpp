#include<bits/stdc++.h>
#include<stdio.h>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define _USE_MATH_DEFINES
#define f first
//#define s second
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define INF 1000000000000000000
#define MAXN (int)(1e7)+1
#define MOD 1000000007

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,int> pwi;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector< vector<pair<ll,ll > > > wGraph;
typedef vector<vector<ll> > graph;
//typedef vector<vector<ll> > matrix;



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout<<std::fixed;
    cout<<std::setprecision(2);

    int n;
    cin>>n;
    map<char,int> m;

    for(int i = 0;i<n;++i){
        string s;
        cin>>s;
        m[s[0]]++;
    }

    cout<<"AC x "<<m['A']<<endl;
    cout<<"WA x "<<m['W']<<endl;
    cout<<"TLE x "<<m['T']<<endl;
    cout<<"RE x "<<m['R']<<endl;

    return 0;
}