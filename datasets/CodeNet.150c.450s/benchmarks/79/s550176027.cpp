#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<pint> vpint;
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for (int i=(n)-1;i>=0;i--)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define REPS(i,f,n) for (int i=(f)-1;i>=(n);i--)
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
 
void slove(int n, int r){//n ?????° r?????????????????°?°
    stack<int> s;
    reps(i, 1, n + 1) s.push(i);//?????????
 
    rep(i, r){//r????????????
        int p, c;
        cin >> p >> c;
        stack<int> tmp1;
        stack<int> tmp2;

        rep(i, p - 1){
            tmp1.push(s.top());
            s.pop();
        }
        rep(i, c){
            tmp2.push(s.top());
            s.pop();
        }

        rep(i, p - 1){
            s.push(tmp1.top());
            tmp1.pop();
        }
        rep(i, c){
            s.push(tmp2.top());
            tmp2.pop();
        }
    }
 
    printf("%d\n", s.top());
    return;
}
 
int main(void){
    int n, r;
    cin >> n >> r;
    while(n != 0 || r != 0){
        slove(n, r);
        cin >> n >> r;
    }
    return 0;
}