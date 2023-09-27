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
typedef pair<int,pii>ppii;
typedef pair<ppii,ppii> d_pii;
ppii cal(string s){
    ppii temp;
    string a,b,c;
    a=s[0]; a+=s[1];
    b=s[3];b+=s[4];
    c=s[6];c+=s[7];
    temp.first=stoi(a);
    temp.second=pii(stoi(b),stoi(c));
    return temp;
}
int main(){
    int n;
    while(cin>>n,n){
        vector<pair<ll,ll>>v;
        rep(i,n){
            string s,e; cin>>s>>e;
            ppii start,end;
            start=cal(s);
            end=cal(e);
            ll _start=start.first*3600+start.second.first*60+start.second.second;
            ll _end=end.first*3600+end.second.first*60+end.second.second;
            //cout<<start.first<<":"<<start.second.first<<":"<<start.second.second<<endl;
            //cout<<end.first<<":"<<end.second.first<<":"<<end.second.second<<endl;
            v.push_back(make_pair(_start,_end));
        }
        sort(all(v));
        vl u(v.size());
        rep(i,v.size())u[i]=v[i].first;
        ll ans=0;
        ll base=0;
        u.push_back(INF);
        v.push_back(pii(INF,INF));
        rep(i,u.size()){
            ans++;
            base=v[i].second;
            while(true){
                bool update=false;
                vector<ll>::iterator itr=lower_bound(u.begin(), u.end(),base);
                if(itr!=u.end()){
                    int index=(int)(itr-u.begin());
                    update=true;
                    //cout<<*itr<<endl;
                    u.erase(itr);
                    base=v[index].second;
                    v.erase(v.begin()+index);
                }
                if(!update)break;
            }
        }
        cout<<ans<<endl;
    }
}