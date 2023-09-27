// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

// #include <boost/multiprecision/cpp_dec_float.hpp>
// #include <boost/multiprecision/cpp_int.hpp>
// namespace mp = boost::multiprecision;
// using Bint = mp::cpp_int;
// using Real = mp::number<mp::cpp_dec_float<1024>>;

int N, K;
vector<int> W(100010);

bool check(int P){
    int sum = 0, item = 0, truck = 0;
    while(1){
        if(item == N) return true;
        if(truck == K) return false;
        if(sum + W[item] <= P){
            sum += W[item];
            item++;
        } else {
            sum = 0;
            truck++;
        }
    }
}

int main(){
    cin >> N >> K;
    rep(i, N) cin >> W[i];
    int ng = 0, ok = INF;
    while(ok - ng > 1){
        int m = (ok + ng)/2;
        if(check(m)) ok = m;
        else ng = m;
    }
    cout << ok << endl;
}
