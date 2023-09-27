#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define FOR(i, m, n) for (int i = m; i < n; i++)

int main() {
    vector<pair<int,P> > ls;
    FOR(i,1,151){
        FOR(j,i+1,151){
            ls.push_back({i*i+j*j,P(i,j)});
        }
    }
    sort(ls.begin(),ls.end());
    while(1){
        int h,w;
        cin >> h >> w;
        if(h==0)break;
        int t = 0;
        while(ls[t].second != P(h,w))t++;
        cout << ls[t+1].second.first << " " << ls[t+1].second.second << endl;
    }
    return 0;
}

