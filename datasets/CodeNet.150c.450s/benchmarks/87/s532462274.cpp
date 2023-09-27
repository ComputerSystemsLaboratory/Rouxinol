#pragma GCC optimize ("O3")
#include <iostream>
#include <iomanip>
#include <istream>
#include <ostream>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <bitset>
#include <utility>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <ctime>
#include <cctype>
#include <cstdlib>
#define IINF 10e8
#define INF 1<<30
#define MOD 1000000007
#define mod 998244353
#define REP(i, a, n) for (ll i = a; i < (ll)(n); i++)
#define REPE(i, a, n) for (ll i = a; i <= (ll)(n); i++)
#define Endl endl
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define mmax(x,y)(x>y?x:y)
#define mmin(x,y)(x<y?x:y)
#define chmax(x,y) x=mmax(x,y)
#define chmin(x,y) x=mmin(x,y)
#define all(x) (x).begin(),(x).end()
#define siz(x) (ll)(x).size()
#define PI acos(-1.0)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int,int>Pin;
typedef pair<ll,ll>Pll;
template<class T> using V=vector<T>;
long long GCD(long long a, long long b) {return b?GCD(b,a%b):a;}
long long LCM(long long a, long long b) {return a/GCD(a,b)*b;}
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int ddx[8]={-1,0,1,0,1,1,-1,-1};
int ddy[8]={0,-1,0,1,1,-1,1,-1};
ll cmp(pair<ll,ll>a,pair<ll,ll> b){
        if(a.se!=b.se)
        return a.se<b.se;
        else
        return a.fi<b.fi;
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    //-------------------------------  
    //ll begin_time=clock();
    //-------------------------------
    int h;cin>>h;
    while(h){
        int a[h][5];bool have[h][5];
        for(int i=0;i<h;i++){
            for(int j=0;j<5;j++){
                cin>>a[i][j];
                have[i][j]=1;
            }
        }
        int ans=0;
        int preans=0;
        
        int cnt=0;
        while(preans!=ans||cnt==0){
            //cout<<1<<endl;
            preans=ans;
            bool bingo[h][5];
            int  newa[h][5];
            for(int i=0;i<h;i++){
                for(int j=0;j<5;j++){
                    bingo[i][j]=0;
                    newa[i][j]=0;
                }
            }
            for(int i=0;i<h;i++){   
                bool abc=0;
                if(a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][2]==a[i][3]&&a[i][3]==a[i][4]&&a[i][0]>0){
                    abc=1;
                    for(int j=0;j<5;j++)bingo[i][j]=1;
                    ans+=5*a[i][0];
                }
                if(abc==1)break;
                for(int j=0;j<2;j++){
                    if(a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2]&&a[i][j+2]==a[i][j+3]&&a[i][j]>0){
                        abc=1;
                        for(int k=j;k<j+4;k++)bingo[i][k]=1;
                        ans+=4*a[i][j];
                        if(abc==1)break;
                    }
                }
                if(abc==1)break;
                for(int j=0;j<3;j++){
                    if(a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2]&&a[i][j]>0){
                        abc=1;
                        for(int k=j;k<j+3;k++)bingo[i][k]=1;
                        ans+=3*a[i][j];
                        if(abc==1)break;
                    }
                }
            }
            for(int j=0;j<5;j++){
                int nowi=h-1;
                for(int i=h-1;i>=0;i--){
                    if(bingo[i][j])continue;
                    else{
                        newa[nowi][j]=a[i][j];
                        nowi--;
                    }
                }
            }
            for(int i=0;i<h;i++){
                for(int j=0;j<5;j++){
                    a[i][j]=newa[i][j];
                }
            }
            cnt++;
            //cout<<ans<<endl;
        }

        cout<<ans<<Endl;
        cin>>h;
    }
    //-------------------------------  
    //ll end_time=clock();cout<<"time="<<end_time-begin_time<<"ms"<<endl;
    //-------------------------------
    return 0;
}
//----------------------------------------------------------------------



























