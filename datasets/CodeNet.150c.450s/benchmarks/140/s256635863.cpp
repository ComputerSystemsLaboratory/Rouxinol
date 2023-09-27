#include <iostream>
#include <queue>
#include <set>
#include <map>
#include <vector>
#define FOR(i,n) for(unsigned i=0; i<n; i++)

using namespace std;

typedef unsigned us;
typedef pair<us, us> point;

int main () {
    us V, E;
    cin >> V >> E;

    set<us> seen;
    seen.insert(0);
    map<us, vector<point> > graph;
    priority_queue<point, vector<point>, greater<point> > q;
    us distance = 0;

    FOR(_, E) {
        us s, t, d;
        cin >> s >> t >> d;
        graph[s].push_back(make_pair(d, t));
        graph[t].push_back(make_pair(d, s));
        if (s == 0) q.push(make_pair(d, t));
        if (t == 0) q.push(make_pair(d, s));
    }

    while (!q.empty() && seen.size() != V) {
        point p = q.top();
        us v = p.second;
        us w = p.first;
        q.pop();

        if (seen.find(v) == seen.end()) {
            seen.insert(v);
            vector<point> neighbours = graph[v];
            FOR(i, neighbours.size()) q.push(neighbours[i]);
            distance += w;
        }
    }

    cout << distance << endl;

}

