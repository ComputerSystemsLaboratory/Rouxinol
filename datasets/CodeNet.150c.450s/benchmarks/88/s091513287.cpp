#include <cmath>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
#include <iomanip>

#define int long long int
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

const int INF = 1e15;
const int MOD = 1e9+7;

bool comp(P& x, P& y){
    int h1 = x.first;
    int w1 = x.second;
    int h2 = y.first;
    int w2 = y.second;

    int d1 = h1 * h1 + w1 * w1;
    int d2 = h2 * h2 + w2 * w2;

    if(d1 != d2){
        return d1 < d2;
    }
    return h1 < h2;
}

signed main(){
    vector<P> a;
    for(int i = 1; i < 150; i++){
        for(int j = i + 1; j < 150; j++){
            a.emplace_back(i, j);
        }
    }

    sort(a.begin(), a.end(), comp);

    while(true){
        int h, w;
        cin >> h >> w;

        if(h == 0 && w == 0){
            break;
        }

        rep(i, (int)a.size()){
            int hh = a[i].first;
            int ww = a[i].second;
            if(h == hh && w == ww){
                cout << a[i+1].first << " " << a[i+1].second << endl;
                break;
            }
        }
    }

    return 0;
}

