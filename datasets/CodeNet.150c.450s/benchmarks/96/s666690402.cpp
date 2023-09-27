#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define cinf(n,x) for(int i=0;i<(n);i++)cin>>x[i];
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define ft first
#define sc second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(v) (v).begin(),(v).end()
#define mod 1000000007
using namespace std;
typedef long long ll;
template<class T> using V=vector<T>;
using Graph = vector<vector<int>>;
using P=pair<ll,ll>;
typedef unsigned long long ull;
typedef long double ldouble;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//V,P(大文字)使用不可

const ll INF=1e18;

vector<char> c[15];

signed main(){
    c[1].push_back('.');
    c[1].push_back(',');
    c[1].push_back('!');
    c[1].push_back('?');
    c[1].push_back(' ');
    for(int i=2;i<=6;i++){
        for(int j=0;j<3;j++) c[i].push_back((i-2)*3+j+'a');
    }
    for(int i=0;i<4;i++) c[7].push_back(15+i+'a');
    for(int i=0;i<3;i++) c[8].push_back(19+i+'a');
    for(int i=0;i<4;i++) c[9].push_back(22+i+'a');
    int q;
    cin>>q;
    while(q--){
        string s,t;
        cin>>s;
        int m=s.size();
        int l=0;
        int cnt=0;
        while(true){
            char cc=s[l];
            int u=cc-'0';
            if(s[l]!='0'){
                while(s[l]!='0'){
                    l++;
                    cnt++;
                }
                cnt--;
                if(u==7||u==9){
                    cnt%=4;
                }else if(u==1)cnt%=5;
                else cnt%=3;
                t+=c[u][cnt];
                cnt=0;
            }else{
                l++;
            }
            if(l==m) break;
        }
        cout<<t<<endl;
    }
}
