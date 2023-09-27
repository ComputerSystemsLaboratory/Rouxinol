#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <iterator>
#include <array>
#include <memory>
#include <stack>
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
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
int main(){
    int h;
    while(cin>>h,h){
        vvi v(h,vi(5));
        rep(i,h)rep(j,5)cin>>v[i][j];
        vector<pair<pii,int>>del;
        ll ans=0;
        bool flag=true;
         vector<vector<bool>>used(h,vb(5,true));
        while(flag){
            del.clear();
            for(int i=0; i<h;i++){
                for(int j=0; j<4;j++){
                    if(!used[i][j])continue;
                    bool foo=true;
                    int cnt=1;
                    int k=j+1;
                    while (foo&&k<5) {
                        if(!used[i][k])break;
                        if(v[i][j]==v[i][k]){cnt++;k++;}
                        else foo=false;
                    }
                    if(cnt<3)continue;
                    del.push_back(make_pair(pii(i,j),cnt));
                    rep(_,cnt-1)used[i][j+_]=false;
                   // cout<<v[i][j]<<" "<<cnt<<endl;
                    ans+=cnt*v[i][j];
                }
            }
            if(del.empty())break;
            vector<vector<int>>temp(h,vi(5));
            rep(i,h){
                rep(j,5){
                    rep(k,del.size()){
                        if(del[k].first==pii(i,j)){
                            rep(_,del[k].second)
                            used[del[k].first.first][del[k].first.second+_]=false;
                        }
                    }
                }
            }
            int last[10000]={0};
            for(int i=h-1; i>=0;i--){
                rep(j,5){
                    if(!used[i][j])continue;
                    {temp[(h-1-last[j])][j]=v[i][j];used[h-1-last[j]][j]=true;last[j]++;}
                }
            }
            v=temp;
            //rep(i,h){rep(j,5)cout<<v[i][j];cout<<endl;}
            //cout<<endl;
        }
        cout<<ans<<endl;
    }
}