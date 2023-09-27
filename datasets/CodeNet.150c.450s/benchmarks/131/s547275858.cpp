#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
#define MP make_pair
#define INF (sizeof(int) == 4 ? 1e9:1e18)
#define EPS 0.0000000001
using namespace std;
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
template<typename Head, typename Value> auto vectors(const Head &head, const Value &v) { return vector<Value>(head, v); }
template<typename Head, typename... Tail> auto vectors(Head x, Tail... tail) { auto inner = vectors(tail...); return vector<decltype(inner)>(x, inner); }
template<class T> void join(T a){int b=0;for(auto itr :a){if(b++!=0)cout << " "; cout << itr;} }
using ll  = long long;
using ld  = long double;
using pii = pair<int,int>;
using piii = pair<int,pii>;
int W,H;
int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};
bool valid(int x,int y){return (0<=x&&x<W)&&(0<=y&&y<H);}
signed main(){
    int a,b;
    while(cin >> a >>b, a+b){
        vector<int>v;
        string s = to_string(a);
        v.push_back(a);
        rep(i,20){
            while(s.size()<b){
                s  = "0"+s;
            }
            string temp = s;
            sort(all(temp),greater<char>());
            int num = stoi(temp);
            sort(all(temp));
            int dif = stoi(temp);
            v.push_back(num - dif);
            s = to_string(num-dif);
            //cout << s << endl;
        }
        vector<pii>f;
        rep(i,v.size())rep(j,v.size()){
            if(i == j)continue;
            if(v[j] == v[i] && i > j){
                f.push_back(pii(i,j));
            }
        }
        sort(all(f));
    cout << f.front().second << " " << v[f.front().first] << " " << f.front().first-f.front().second<< endl;
    }
}


