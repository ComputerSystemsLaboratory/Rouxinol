#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

typedef pair<string, int> P;
int main() {
    int n, q;
    int tt = 0;
    cin >> n >> q;
    queue<P> que;
    REP(i,n) {
        string name;
        int time;
        cin >> name >> time;
        que.push(make_pair(name, time));
    }
    
    while(!que.empty()) {
        P top = que.front();
        if (top.second <= q) {
            tt += top.second;
            cout << top.first << " " << tt << endl;
            que.pop();
        }else {
            tt += q;
            que.push(make_pair(top.first, top.second - q));
            que.pop();
        }
    }
    return 0;
}