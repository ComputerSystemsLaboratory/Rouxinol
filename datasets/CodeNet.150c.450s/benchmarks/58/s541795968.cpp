#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <bitset>
#include <numeric>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <tuple>
#include <stack>

using namespace std;

#define rep(i,n) for(int i = 0; i<n ; i++)
#define FOR(i,a,n) for(int i=a; i<n; i++)
#define REPSTR(i,s) for(int i=0; (s)[i]; i++)
#define REPITR(i,s) for(auto i=(s).begin(); i!=(s).end();i++)

#define RANGE(a,i,b) ((a)<=(i)&&(i)<=(b))

#define pb push_back
#define mp make_pair

#define ALL(a) (a).begin(), (a).end()

#define EXIST(s,x) ((s).find(x)!=(s).end())

#define SET(a,c) memset(a,c,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))

#ifdef _DEBUG
#define DEBUG(x) cerr<<#x<<":"<<x<<endl
#else
#define DEBUG(x)
#endif

#define PRINTJOIN(x,n) rep(i,n){if(i)cout<<" ";cout<<x[i];}cout<<endl 

#define INF 1001001001
#define LLINF 1001001001001001001LL

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef stringstream SS;

#define PQ priority_queue

#define FST first
#define SEC second

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

/*
AOJ 1347: Problem C: Shopping
https://onlinejudge.u-aizu.ac.jp/problems/1347

所要時間
    考察 10分くらい
    コーディング 10分くらい
    座席 左中央

学んだこと
    貪欲だと知って解くとすぐに解けた。
    バグりそうなところは手で解くことであらかじめ把握できたので，一発で通った。

参考資料
なし

指針
    [a, b)の間を一度戻ると，最初から最後まで突っ走るのと比べて余計に2(b-a)だけ歩かなければならない
    →戻る距離を最小化したい
    →戻らなければならない範囲が重なっていたら，和集合をとって戻るのが得
    戻らなければならない範囲だけ進むのに3距離単位だけかかると考えると実装が楽
*/


int l[212345]; // 戻らなければならない範囲ならtrue



int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
    stack<int> s;
    string c;
    while ( cin >> c ) {
        int a,b;
        if ( c == "+" ) {
            a = s.top(); s.pop();
            b = s.top(); s.pop();
            s.push( b + a );
        }
        else if ( c == "-" ) {
            a = s.top(); s.pop();
            b = s.top(); s.pop();
            s.push( b - a );            
        }
        else if ( c == "*" ) {
            a = s.top(); s.pop();
            b = s.top(); s.pop();
            s.push( b * a );
        }
        else {
            s.push(atoi(c.c_str()));
        }
    }
    cout << s.top() << endl;
	return 0;
}
