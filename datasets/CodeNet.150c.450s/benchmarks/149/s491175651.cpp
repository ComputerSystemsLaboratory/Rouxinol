/*
　　　  ∧＿∧　やあ
　　 （´・ω・｀)　　　　　/　　　　　ようこそ、バーボンハウスへ。
　　 ／∇y:::::＼　　　 [￣]　　　　　このテキーラはサービスだから、まず飲んで落ち着いて欲しい。
　　 |:⊃:|:::::|　　　|──|
￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣|　うん、「また」なんだ。済まない。
￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣|￣　  仏の顔もって言うしね、謝って許してもらおうとも思っていない。
￣￣￣￣￣￣￣￣￣￣￣￣￣￣／|
　　　　∇　∇　∇　∇　　　／.／|　　　でも、この提出を見たとき、君は、きっと言葉では言い表せない
　　　　┴　┴　┴　┴　／ ／　  |　　　「ときめき」みたいなものを感じてくれたと思う。
￣￣￣￣￣￣￣￣￣￣|／　　  |　　　殺伐としたコンテストの中で、そういう気持ちを忘れないで欲しい
￣￣￣￣￣￣￣￣￣￣　　　　 |　　　そう思って、この提出を投げたんだ。
　　　(⊆⊇)　(⊆⊇)　(⊆⊇)　　|
　    ||　　 ||　　||　　|　　　 じゃあ、判定を聞こうか。
　　.／|＼　／|＼ ／|＼
*/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define fst first
#define snd second
#define mp make_pair
#define ALL(obj) (obj).begin(),(obj).end()
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i = (b-1);i>=a;i--)
#define REP(i,n)  FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n) 
#define SIZE(x) ((int)(x).size())
#define debug(x) cerr << #x << " -> " << x << " (line:" << __LINE__ << ")" << '\n';
#define debugpair(x, y) cerr << "(" << #x << ", " << #y << ") -> (" << x << ", " << y << ") (line:" << __LINE__ << ")" << '\n';
typedef long long lint;
typedef pair<int, int> pint;
typedef pair<lint, lint> plint;
typedef vector<lint> vec;
typedef vector<vector<lint>> matrix;
typedef priority_queue<lint> p_que;
typedef priority_queue<lint, vector<lint>, greater<lint>> p_que_rev;
const lint INF = INT_MAX;
const lint LINF = LLONG_MAX;
const lint MOD = 1000000000 + 7;
const double EPS = 1e-9;
const double PI = acos(-1);
const int di[]{0, -1, 0, 1, -1, -1, 1, 1};
const int dj[]{1, 0, -1, 0, 1, -1, -1, 1};

lint gcd(lint a, lint b) {
    lint r;
    while (b != 0) {
        r = a % b;
        a = b; 
        b = r;
    }
    return a;
}

lint lcm(lint a, lint b) {
    return (a / gcd(a, b)) * b;
}

lint power(lint x, lint n, lint mod = MOD) {
    lint ret = 1;
    while(n > 0) {
        if(n & 1){
            (ret *= x) %= mod;
        }
        (x *= x) %= mod;
        n >>= 1;
    }
    return ret;
}

vector<lint> make_power(int n, lint base){
    lint num = 1;
    vector<lint> ret;
    for (int i=0; i<=n; ++i){
        ret.push_back(num);
        num *= base;
    }
    return ret;
}

struct UnionFind
{
    vector<int> data;
    UnionFind() {}

    // initialize
    UnionFind(int size) : data(size, -1) {}

    void unite_set(int x, int y){
        x = root(x);
        y = root(y);
        bool is_unite = (x != y);
        
        if (is_unite){
            if (data[y] < data[x]){
                swap(x, y);
            }
            data[x] += data[y];
            data[y] = x;
        }
    }

    bool is_same(int x, int y){
        return root(x) == root(y);
    }

    int root(int x){
        return (data[x] < 0) ? x : data[x] = root(data[x]);
    }

    int size(int x){
        return -data[root(x)];
    }
};


int main()
{
    int n, q;
    cin >> n >> q;
    int com, x, y;
    UnionFind uf(n);
    REP(query, q){
        cin >> com >> x >> y;
        if(com == 0){
            uf.unite_set(x, y);
        }
        else if(com == 1){
            cout << ((uf.is_same(x, y) ? 1 : 0)) << endl;
        }
    }
    return 0;
}
