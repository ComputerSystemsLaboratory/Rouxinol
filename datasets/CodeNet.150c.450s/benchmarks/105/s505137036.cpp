#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <string>
#include <set>
#include <bitset>
#include <unordered_map>
#include <cmath>
#include <functional>
#include <map>
#include <cstdlib>
#include <stack>
#include <cassert>

// aliases
using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;
template <class T>
using Vvec = vector<vector<T> >;

// graph
using Graph = Vvec<int>;
class Edge{
public:
    int to;
    long long cost;
    Edge(int v, long long c = 1): to(v), cost(c){}
    ~Edge(){}
    bool operator<(const Edge& e) const{return cost < e.cost;}
};
using WeightedGraph = Vvec<Edge>;

// for debug
template <class T>
void debug(T& v)
{
    for(auto& x: v) cout << x << " ";
    cout << endl;
}

// answer

// basisの要素を2元体上のベクトルとみなす
// span{basis}がaを含むかどうか
// 含まない場合basisを更新
bool isIncluded(vector<ll>& basis, ll a){
    for(auto& b: basis){
        if(b & (-b) & a) a ^= b;
    }
    if(a == 0) return true;
    for(auto& b: basis){
        if(a & (-a) & b) b ^= a;
    }
    basis.emplace_back(a);
    return false;
}

int solve(const int N, const vector<ll>& A, const string& S){
    vector<ll> basis;
    for(int i=N-1; i>=0; i--){
        bool flag = isIncluded(basis, A[i]);
        if(flag) continue;
        if(S[i]=='1') return 1;
    }
    return 0;
}

int main()
{
    int T;
    cin >> T;
    vector<int> ans(T);
    for(int t=0; t<T; t++){
        int N;
        cin >> N;
        vector<ll> A(N);
        for(auto& e: A) cin >> e;
        string S;
        cin >> S;

        ans[t] = solve(N, A, S);
    }
    for(auto& e: ans) cout << e << "\n";
}