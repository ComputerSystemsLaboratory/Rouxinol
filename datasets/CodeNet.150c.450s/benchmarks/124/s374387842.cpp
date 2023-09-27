#include <iostream>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

class path{
public:
    int from;
    int to;
    int dist;
    path(){
        from = -1;
        to = -1;
        dist = -1;
    }
    path(int from_,int to_,int dist_){
        from = from_;
        to = to_;
        dist = dist_;
    }
    static bool compare(const path& a,const path& b) {
        return a.from < b.from;
    }
    bool operator<(const path& e) const {
        return this->dist < e.dist;
    }
};

int n,u,k,v,c;
vector<path> w;
ll d[10000];

int main() {
    for(int i = 0;i < 10000;i++)d[i] = -NIL;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> u >> k;
        for(int j = 0;j < k;j++) {
            cin >> v >> c;
            w.push_back(path(u,v,c));
        }
    }
    sort(w.begin(),w.end(),path::compare);
    priority_queue<pair<int,int>> q;
    q.push(make_pair(0,0));
    d[0] = 0;
    while(!q.empty()) {
        auto y = q.top();q.pop();
        if(d[y.second] != y.first) continue;
        auto r = lower_bound(w.begin(),w.end(),path(y.second,0,0),path::compare);
        auto l = lower_bound(w.begin(),w.end(),path(y.second+1,0,0),path::compare);
        for(auto itr = r;itr < l;itr++) {
            if(d[itr->to] > d[itr->from] + itr->dist) {
                d[itr->to] = d[itr->from] + itr->dist;
                q.push(make_pair(d[itr->to],itr->to));
            }
        }
    }
    for(int i = 0;i < n;i++){
        cout << i << " " << d[i] << endl;
    }
}

