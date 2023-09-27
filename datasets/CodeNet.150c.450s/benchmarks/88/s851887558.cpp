#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int main(void){
    vector<pair<int, int>> ans;
    // ((対角線, 高さ), 横)
    vector<pair<pair<int, int>, int>> rect;
    for(int i = 1; i <= 150; i++){
        for(int j = i+1; j <= 150; j++){
            //横がj
            rect.push_back(make_pair(make_pair(i*i + j*j, i), j));
        }
    }
    sort(rect.begin(), rect.end());
    while(true){
        int h, w; cin >> h >> w;
        if(h == 0 && w == 0) break;
        pair<int, int> key = make_pair(h*h + w*w, h);
        int res = 0;
        while(key >= rect[res].first) res++;
        ans.push_back(make_pair(rect[res].first.second, rect[res].second));
    }
    rep(i, ans.size()) cout << ans[i].first << " " << ans[i].second << endl;
    return 0;
}
