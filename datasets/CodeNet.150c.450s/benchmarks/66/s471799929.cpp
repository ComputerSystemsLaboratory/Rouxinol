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
    int n; cin>>n;
    map<string,int>mp;
    rep(i,n){string gotiusa_is_god; cin>>gotiusa_is_god;mp[gotiusa_is_god]++;}
    int ujimatsu_tiya; cin>>ujimatsu_tiya;
    bool gotiusa=true;
    rep(i,ujimatsu_tiya){
        string rize; cin>>rize;
        if(!mp[rize]){cout<<"Unknown "<<rize<<endl; continue;}
        if(gotiusa)cout<<"Opened by "<<rize<<endl;
        else cout<<"Closed by "<<rize<<endl;
        if(gotiusa)gotiusa=false;
        else gotiusa=true;
    }
}