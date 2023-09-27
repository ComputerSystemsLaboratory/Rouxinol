#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(c) (c).begin(), (c).end()
#define mp(a, b) make_pair(a, b)
const int dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};

ostream& operator<<(ostream& os, const pair<int, int>& p){
    return os << p.first << ' ' << p.second;
}

pair<int, int> solve(int N, vector<int>& n, vector<int>& d){
    vector<int> x(N), y(N);
    rep(i, (int)n.size()){
        x[i+1] = x[n[i]] + dx[d[i]];
        y[i+1] = y[n[i]] + dy[d[i]];
    }
    auto itrx = minmax_element(all(x)), itry = minmax_element(all(y));
    return mp(*itry.second - *itry.first + 1, *itrx.second - *itrx.first + 1);
}

int main(){
    int N;
    while(cin >> N, N){
        vector<int> n(N-1), d(N-1);
        rep(i, N-1)cin >> n[i] >> d[i];
        cout << solve(N, n, d) << '\n';
    }
    return 0;
}