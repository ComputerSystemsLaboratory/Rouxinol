#include <bits/stdc++.h>

using namespace std;

pair<int, int> nxt[256][256];

int main()
{
    int h, w;
    vector<pair<int, pair<int, int> > > v;
    
    for (int i = 1; i <= 150; i++){
        for (int j = i + 1; j <= 150; j++){
            v.push_back(make_pair(i * i + j * j, make_pair(i, j)));
        }
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size() - 1; i++){
        pair<int, int> now = v[i].second, next = v[i + 1].second;
        nxt[now.first][now.second] = next;
    }
    
    while (scanf("%d %d", &h, &w) && w){
        printf("%d %d\n", nxt[h][w].first, nxt[h][w].second);
    }
    
    return (0);
}