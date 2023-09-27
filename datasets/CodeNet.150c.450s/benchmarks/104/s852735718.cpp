#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)

int main(){
    int w, n;
    cin >> w >> n;
    vector<int> num(w, 0);
    int it = 1;
    for(int& k : num) k = it++;
    rep(i, n){
        int a, b;
        char c;
        cin >> a >> c >> b;
        a--; b--;
        swap(num[a], num[b]);
    }
    for(int k : num)
      cout << k << endl;
    return 0;
}