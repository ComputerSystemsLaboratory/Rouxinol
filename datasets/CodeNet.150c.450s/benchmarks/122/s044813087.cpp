#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n+1); ++i)
using namespace std;
using ll = long long;
// const int INF = +100100100;
// typedef pair<int,int> P;


int main(){
    priority_queue<int> pr;
    while(1){
        string op;
        cin >> op;
        if(op=="insert"){
            int v;
            cin >> v;
            pr.push(v);
        }else if(op=="extract"){
            printf("%d\n",pr.top());pr.pop();
        }else break;
    }
    return 0;
}
