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
#define ALL(obj) (obj).begin(),(obj).end()
#define debug(x) cerr << #x << " -> " << x << " (line:" << __LINE__ << ")" << '\n';
#define debugpair(x, y) cerr << "(" << #x << ", " << #y << ") -> (" << x << ", " << y << ") (line:" << __LINE__ << ")" << '\n';
typedef long long lint;
typedef priority_queue<int> p_que;
typedef priority_queue<int, vector<int>, greater<int>()> p_que_rev;
const lint INF = INT_MAX;
const lint LINF = LLONG_MAX;
const lint MOD = 1000000000 + 7;
const double EPS = 1e-9;
const double PI = acos(-1);
const int di[]{0, -1, 0, 1, -1, -1, 1, 1};
const int dj[]{1, 0, -1, 0, 1, -1, -1, 1};

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    lint n;
    vector<lint> a;
    vector<lint> s;
    lint ans;
    cin >> n;
    while(true){
        ans = -LINF;
        a.clear();
        a.resize(n);
        s.clear();
        s.resize(n+1);
        s[0] = 0;
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }
        for (int i=0; i<n; ++i){
            s[i+1] = s[i] + a[i];
        }
        for (int i=1; i<=n; ++i){
            for (int j=i; j<=n; ++j){
                ans = max(ans, s[j] - s[i-1]);
            }
        }
        cout << ans << endl;
        cin >> n;
        if(n == 0){
            break;
        }
    }
    return 0;
}
