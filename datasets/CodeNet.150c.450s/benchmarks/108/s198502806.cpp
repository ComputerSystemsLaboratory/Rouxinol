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

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> graph;
    vector<bool> isChecked(n, false);
    graph.resize(n);
    vector<int> d(n, -1);
    d[0] = 0;
    int u, k, dst;
    REP(i, n){
        cin >> u >> k;
        u--;
        REP(j, k){
            cin >> dst;
            dst--;
            graph[u].push_back(dst);
        }
    }
    queue<pint> queue;
    queue.push(make_pair(0, 0));
    while(!queue.empty()){
        auto t = queue.front();
        queue.pop();
        //debugpair(t.fst, t.snd);
        if(isChecked[t.fst]){
            continue;
        }
        isChecked[t.fst] = true;
        REP(j, (int)graph[t.fst].size()){
            int l = graph[t.fst][j];
            if(d[l] == -1){
                d[l] = t.snd + 1;
            }
            else {
                d[l] = min(d[l], t.snd + 1);
            }
            queue.push(make_pair(l, t.snd + 1));
        }
    }
    REP(i, n){
        cout << (i+1) << " " << d[i] << endl;
    }
    return 0;
}
