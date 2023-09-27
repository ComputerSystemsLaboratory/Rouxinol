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
#define all(in) in.begin(), in.end()
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
int main(){
    int p; cin>>p;
    rep(hogehoge,p){
        vi v(10,0);rep(i,10)cin>>v[i];
        vb flag(11,false);flag[v[0]]=true;
        pii num=pii(v[0],INF);
        rep(i,10){
            if(i==0)continue;
            if(num.first<v[i]){flag[v[i]]=true; num.first=v[i];}
        }
        rep(i,10){
            if(flag[v[i]])continue;
            else if(num.second==INF){num.second=v[i];flag[v[i]]=true;}
            if(num.second<v[i]){flag[v[i]]=true; num.second=v[i];}
        }
        bool judge=true;
        rep(i,10)if(!flag[i+1])judge=false;
        if(judge)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}