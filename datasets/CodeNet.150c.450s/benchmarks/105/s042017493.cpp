#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <deque>
#include <functional>
#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstdint>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define MP make_pair
#define PB push_back
#define inf 1000000007
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(),(x).end()

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}
 
template<class T> inline bool chmax(T &a, T b){
    if(a<b){
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmin(T &a, T b){
    if(a>b){
        a = b;
        return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    rep(zz,t){
        int n;
        cin >> n;
        vector<ll>a(n);
        rep(i,n)cin >> a[i];
        string s;
        cin >> s;
        vector<ll> basis;
        bool flag = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                ll k = a[i];
                for(auto b:basis){
                    chmin(k,k^b);
                }
                if(k)basis.push_back(k);
            }else{
                ll k = a[i];
                for(auto b:basis){
                    chmin(k,k^b);
                }
                if(k!=0){
                    flag = 1;
                }
            }
        }
        cout << flag << "\n";
    }
    return 0;
}