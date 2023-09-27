#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int main(){
    stack<int> densha;
    for(int a; cin >> a; ){
        if(a == 0){
            cout << densha.top() << endl;
            densha.pop();
        }else
          densha.push(a);
    }
    return 0;
}