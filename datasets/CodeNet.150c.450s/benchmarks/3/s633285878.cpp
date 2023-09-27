#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>
#include <string>
#include <queue>

#define rep(i, n) for(int i = 0; i < n; i++)
#define INF (1<<30)

typedef long long ll;

using namespace std;

void solve(){
    string s;
    int n;
    
    cin >> s;
    cin >> n;

    rep(i, n){
        string q;
        cin >> q;

        if(q == "replace"){
            int x, y;
            string ss;
            cin >> x >> y >> ss;
            s.replace(x, y-x+1, ss);
        }else if(q == "reverse"){
            int x, y;
            cin >> x >> y;
            reverse(s.begin()+x, s.begin()+y+1);
        }else if(q == "print"){
            int x, y;
            cin >> x >> y;
            cout << s.substr(x, y-x+1) << endl;
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
