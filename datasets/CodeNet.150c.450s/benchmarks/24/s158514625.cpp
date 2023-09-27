#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(c) (c).begin(), (c).end()

int main(){
    int N, M;
    while(cin >> N >> M, N|M){
        vector<pair<int, int> > way;
        rep(i, N){
            int D, P;
            cin >> D >> P;
            way.emplace_back(-P, D);
        }
        sort(all(way));
        int exp = 0;
        rep(i, N){
            M -= way[i].second;
            if(0 <= M)continue;
            exp += -way[i].first * min(-M, way[i].second);
        }
        cout << exp << '\n';
    }
    return 0;
}