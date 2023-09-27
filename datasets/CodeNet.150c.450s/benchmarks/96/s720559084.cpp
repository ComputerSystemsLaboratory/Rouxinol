#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>
#include <complex>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <bitset>
#include <functional>
#include <assert.h>
#define int long
#define ll long long
#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,b) rng(i,0,b)
#define gnr(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
#define per(i,b) gnr(i,0,b)
#define eb emplace_back
#define all(x) x.begin(),x.end()
#define SZ(x) x.size()
#define fi first
#define se second
const int INF = 1e9;
using namespace std;

template<class t> using vc=vector<t>;
template<class t> using vvc=vc<vc<t>>;

using pi=pair<int,int>;
using vi=vc<int>;

template<class T>
inline bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<class T>
inline bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout<<fixed<<setprecision(20);

    int N; cin >> N;
    rep(i,N){
        string S; cin >> S;
        string A;
        int pos=0;
        while(SZ(S)>pos){
            int cnt=0;
            while(S[pos]!='0'){
                cnt++;
                pos++;
            }
            if(S[pos-1]=='1'){
                if(cnt%5==1) A+='.';
                else if(cnt%5==2) A+=',';
                else if(cnt%5==3) A+='!';
                else if(cnt%5==4) A+='?';
                else A+=' ';
            } else if(S[pos-1]=='2'){
                if(cnt%3==1) A+='a';
                else if(cnt%3==2) A+='b';
                else A+='c';
            } else if(S[pos-1]=='3'){
                if(cnt%3==1) A+='d';
                else if(cnt%3==2) A+='e';
                else A+='f';
            } else if(S[pos-1]=='4'){
                if(cnt%3==1) A+='g';
                else if(cnt%3==2) A+='h';
                else A+='i';
            } else if(S[pos-1]=='5'){
                if(cnt%3==1) A+='j';
                else if(cnt%3==2) A+='k';
                else A+='l';
            } else if(S[pos-1]=='6'){
                if(cnt%3==1) A+='m';
                else if(cnt%3==2) A+='n';
                else A+='o';
            } else if(S[pos-1]=='7'){
                if(cnt%4==1) A+='p';
                else if(cnt%4==2) A+='q';
                else if(cnt%4==3) A+='r';
                else A+='s';
            } else if(S[pos-1]=='8'){
                if(cnt%3==1) A+='t';
                else if(cnt%3==2) A+='u';
                else A+='v';
            } else if(S[pos-1]=='9'){
                if(cnt%4==1) A+='w';
                else if(cnt%4==2) A+='x';
                else if(cnt%4==3) A+='y';
                else A+='z';
            }
            pos++;
        }
        cout << A << endl;
    }
}
