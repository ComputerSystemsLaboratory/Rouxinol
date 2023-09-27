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
#define ALL(obj) (obj).begin(),(obj).end()
#define debug(x) cerr << #x << " -> " << x << " (line:" << __LINE__ << ")" << '\n';
#define debugpair(x, y) cerr << "(" << #x << ", " << #y << ") -> (" << x << ", " << y << ") (line:" << __LINE__ << ")" << '\n';
typedef long long lint;
typedef priority_queue<lint> p_que;
typedef priority_queue<lint, vector<lint>, greater<lint>()> p_que_rev;
const lint INF = INT_MAX;
const lint LINF = LLONG_MAX;
const lint MOD = 1000000000 + 7;
const double EPS = 1e-9;
const double PI = acos(-1);
const lint di[]{0, -1, 0, 1, -1, -1, 1, 1};
const lint dj[]{1, 0, -1, 0, 1, -1, -1, 1};

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
    int c, a, b;
    cin >> n >> q;
    struct UnionFind d(n);
    vector<int> data;
    // query
    for (int i=0; i<q; ++i){
        cin >> c >> a >> b;
        // same
        if(c == 1){
            cout << d.is_same(a, b) << endl;
        }
        // unite
        else {
            d.unite_set(a, b);
        }
    }
}
