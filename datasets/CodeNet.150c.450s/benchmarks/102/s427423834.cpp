#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
using ll=long long;
using vi=vector<int>;
using vll=vector<ll>;
using pii=pair<int,int>;
using vs=vector<string>;
using vpii=vector<pii>;
using si=set<int>;

#define REP(i,a) for(int i=0;i<a;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define rREP(i,a) for(int i=(a)-1;i>=0;i--)
#define rFOR(i,a,b) for(int i=(a)-1;i>=(b);i--)
#define out(S) cout<<(S)<<endl;
#define beginend(v) (v).begin(),(v).end()
#define IfOut(condition,text) if(condition){out(text);return 0;}
#define IfOutElse(condition,if_text,else_text) if(condition){out(if_text);return 0;}else{out(else_text);return 0;}
#define mod(s) ((s)%(ll)(1e9+7))
ll modpow(ll i, ll j) { ll tmp = 1; while (j) { if (j % 2)tmp = mod(tmp*i); i = mod(i*i); j /= 2; }return tmp; }
#define divmod(a,b) (mod(a*modpow((ll)b,(ll)(1e9+5))))
#define pb(i) push_back(i)
#define fst first
#define snd second
#define Foreach(item,collection) for(auto item:collection)
#define INF (int)1e10
#define removeAll(vec,deleg) auto itr=remove_if(beginend(vec),deleg);vec.erase(itr,vec.end());
void removeAt(string& s, int index) { s.erase(index, 1); }
template<typename T> void removeAt(vector<T>& v, int index) { v.erase(v.begin() + index); }
ll manhattanDistance(ll x1, ll y1, ll x2, ll y2) { return (abs(x2 - x1) + abs(y2 - y1)); }
vector<ll> sieveOfEratosthenes(int max) {ll prime;double sqrtmax = sqrt(max);vector<ll> primeVec, searchVec;FOR(i, 2, max + 1) searchVec.push_back(i);do{prime = searchVec[0];primeVec.push_back(prime);auto itr = remove_if(beginend(searchVec), [=](ll x)->bool {return x%prime == 0; });searchVec.erase(itr, searchVec.end());} while (prime < sqrtmax);primeVec.reserve(primeVec.size() + searchVec.size());primeVec.insert(primeVec.end(), beginend(searchVec));return primeVec;}
ll sum(vi v) {ll sum=0;Foreach(i,v){sum+=i;}return sum;}
#define ShowAll(v) Foreach(i,v) out(i);


int x,y;
vs box;
int dx[4]{0,1,0,-1};
int dy[4]{1,0,-1,0};
ll s=0;
void dfs(int px,int py){
    REP(i,4){
        int nx=px+dx[i];
        int ny=py+dy[i];
        if(nx>=0&&nx<x&&ny>=0&&ny<y&&box[ny][nx]=='.'){
            box[ny][nx]='d';
            s++;
            dfs(nx,ny);
        }
    }
    return;
}

int main(){
    vi ans;
    while (cin>>x>>y,(x||y))
    {
        box.resize(y);
        int sx=-1,sy;
        REP(i,y){cin>>box[i];if(sx==-1&&(sx=box[i].find('@'))!=-1){sy=i;}}
        s=1;
        dfs(sx,sy);
        ans.pb(s);
    }
    
    ShowAll(ans);
    return 0;
}