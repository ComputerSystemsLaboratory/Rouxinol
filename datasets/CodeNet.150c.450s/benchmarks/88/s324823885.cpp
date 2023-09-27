#include <iostream>
#include <map>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
#define mp(a, b) make_pair(a, b)

int main(){
    multimap<pair<int, int>, pair<int, int> > m;
    rep(i, 150)rep(j, i){
        if(i == 0 || j == 0)continue;
        // m.emplace(mp(i*i + j*j, i*j), mp(j, i));
        m.insert(mp(mp(i*i + j*j, i*j), mp(j, i)));
    }
    int h, w;
    while(cin >> h >> w, h|w){
        pair<int, int> ans = m.upper_bound(mp(h*h + w*w, h*w))->second;
        cout << ans.first << ' ' << ans.second << '\n';
    }
    return 0;
}