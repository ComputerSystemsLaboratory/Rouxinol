#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(c) (c).begin(), (c).end()

template<typename T> inline void chmax(T& t, T f){if(t < f)t = f;}

int main(){
    int n;
    while(cin >> n, n){
        vector<pair<int, int> > events;
        events.reserve(n<<1);
        rep(i, n){
            int h1, m1, s1, h2, m2, s2;
            char d;
            cin >> h1 >> d >> m1 >> d >> s1 >> h2 >> d >> m2 >> d >> s2;
            events.emplace_back(3600 * h1 + 60 * m1 + s1, 1);
            events.emplace_back(3600 * h2 + 60 * m2 + s2, -1);
        }
        sort(all(events));
        int ans = 1, now = 0;
        rep(i, n<<1)chmax(ans, now += events[i].second);
        cout << ans << '\n';
    }
    return 0;
}