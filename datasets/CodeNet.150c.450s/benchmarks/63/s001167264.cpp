#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int V,E,r;
    cin>>V>>E>>r;
    int finalD[100001];
    for (int i = 0; i < V; i++) finalD[i] = -1;
    multimap<int, pair<int, int> > ds;
    for (int i = 0; i < E; i++) {
        int s,t,d;
        cin>>s>>t>>d;
        ds.insert(make_pair(s, make_pair(t, d)));
    }

    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pqueue;
    pqueue.push(make_pair(0,r));
    while (!pqueue.empty()) {
        pair<int, int> p = pqueue.top();
        pqueue.pop();
        if (finalD[p.second] == -1) finalD[p.second] = p.first;
        else continue;

        multimap<int, pair<int, int> >::iterator it = ds.lower_bound(p.second);
        multimap<int, pair<int, int> >::iterator last = ds.upper_bound(p.second);
        for (; it != last; it++) pqueue.push(make_pair(p.first + it->second.second, it->second.first));
    }

    for (int i = 0; i < V; i++) {
        if (finalD[i] == -1) cout<<"INF"<<endl;
        else cout<<finalD[i]<<endl;
    }
}