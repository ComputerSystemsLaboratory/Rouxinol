#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cctype>
#include<climits>
#include<bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i,n) for(i=0;i<n;i++)
#define fin(ans) cout<<(ans)<<endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int,int> >
#define vvi vector<vector<int> >
#define vvc vector<vector<char> >
#define vvs vector<vector<string> >
#define P 1000000007
using namespace std;
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
const long long LLINF=1LL<<60;
//set<int>::iterator it;
//|\_
//g++ -std=c++1z temp.cpp
//./a.out





int main(void){ios::sync_with_stdio(false);cin.tie(0);
//////////////////////////////////////////////////////
    int i,nmin,nmax,m,j;
    while(1){
        cin>>m>>nmin>>nmax;
        if(nmin==0&&m==0)break;
        
        int diff=0;
        int diffc=0;
        vector<int> v(m,0);
        rep(i,m)cin>>v[i];
        for(i=nmin-1;i<nmax;i++){
            // cout<<i<<" "<<v[i+1]-v[i]<<" "<<diff<<endl;
            if(v[i]-v[i+1]>=diff){
                diff=v[i]-v[i+1];
                diffc=i+1;
            }
        }
        fin(diffc);
    }
//////////////////////////////////////////////////////
return 0;}

