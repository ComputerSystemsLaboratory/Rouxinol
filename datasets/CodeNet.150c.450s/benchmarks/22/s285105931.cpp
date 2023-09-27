#include <cassert>

#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
// #include <boost/foreach.hpp>
// #include <boost/range/algorithm.hpp>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define ll long long
#define Sort(v) sort(all(v))
//#define INF 1e9
#define LINF 1e18
#define INF 1e9
#define END return 0
#define pb push_back
#define se second
#define fi first
#define pb push_back
#define all(v) (v).begin() , (v).end()
#define MP make_pair
#define int long long
using namespace std;
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
// int dx[]={0,1,0,-1};
// int dy[]={1,0,-1,0};
struct edge{int to,cost;};
//typedef pair<int,int> P;

const long long MOD=1000000007LL;
bool isupper(char c){if('A'<=c&&c<='Z')return 1;return 0;}
bool islower(char c){if('a'<=c&&c<='z')return 1;return 0;}
bool isPrime(int x){if(x==1)return 0;if(x==2)return 1;if(x%2==0)return 0;for(int i=3;i*i<=x;i++)if(x%i==0)return 0;return 1;}
bool iskaibun(string s){for(int i=0;i<s.size()/2;i++)if(s[i]!=s[s.size()-i-1])return 0;return 1;}
bool isnumber(char c){return ('0'<=c&&c<='9');}
bool isalpha(char c){return (isupper(c)||islower(c));}
template<typename T> 
void print(vector<T> v){
    for(int i=0;i<v.size();i++){
        if(i)cout<<" ";
        cout<<v[i];
    }
    cout<<endl;
}

template<typename T>
void printendl(vector<T> v){
    for(auto date:v)cout<<date<<endl;
}

template<typename T>
void printvv(vector<vector<T>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(j)cout<<" ";
            cout<<v[i][j];
        }
        cout<<endl;
    }
}
int gcd(int a,int b){
    if(a<b)swap(a,b);
    if(b==0)return a;
    else return gcd(b,a%b);
}

struct Edge{
    int to,cost;
};

struct Bellman{
    vector<vector<Edge>> v;
    vector<int> dist;
    int ct=0;
    Bellman(int n){
        dist.assign(n, INF);
        v.assign(n, vector<Edge>(0));
    }
    void init(int n){
        for(int i=0;i<n;i++){
            int a,b,c;
            cin>>a>>b>>c;
            // a--; b--;
            v[a].push_back(Edge{b,c});
            // v[b].push_back(Edge{a,c}); //無向グラフの時
        }
    }

    bool has_ng(int start){
        int n=v.size();
        dist[start]=0;
        for(int p=0;p<n;p++){
            for(int i=0;i<n;i++){
                //cout<<i<<endl;
                for(int j=0;j<v[i].size();j++){
                    //ct++;
                    Edge e = v[i][j];
                    if(dist[e.to] > dist[i] + e.cost && dist[i] != INF){
                        if(p == n-1)return true;
                        dist[e.to] = dist[i] + e.cost;
                    }
                }
            }
        }
        return false;
    }
};

signed main (){
    int n,m,s;
    cin>>n>>m>>s;
    Bellman bf(n);
    bf.init(m);
    if(bf.has_ng(s)){
        cout<<"NEGATIVE CYCLE"<<endl;
    }else{
        rep(i,0,bf.dist.size()){
            int x=bf.dist[i];
            if(x==INF)cout<<"INF"<<endl;
            else cout<<bf.dist[i]<<endl;
        }
    }
    //cout<<bf.ct<<endl;

    

}
/*

*/
