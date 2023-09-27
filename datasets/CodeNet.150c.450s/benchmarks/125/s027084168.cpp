#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct node {
    int start = 0;
    int end = 0;
};

void depth_search(map<int, vector<int> > &a, map<int, node> &nodes, int &time, int current) {
    time++;
    nodes[current].start = time;
    for (int i=0; i<a[current].size(); i++) {
        if ( nodes[a[current][i]].start == 0 ) {
            depth_search(a, nodes, time, a[current][i]);
        }
    }
    time++;
    nodes[current].end = time;
}

int main() {
    int n;
    cin >> n;
    map<int, vector<int> > a;
    for (int i=0; i<n; i++) {
        int u, k, v;
        cin >> u >> k;
        for (int j=0; j<k; j++) {
            cin >> v;
            a[u].push_back(v);
        }
    }
    
    int time = 0;
    map<int, node> nodes;
    for (int i=0; i<n; i++) {
        node nd; 
        nodes[i] = nd;
    }
    for (int i=1; i<=n; i++) {
        if ( nodes[i].start == 0 ) {
            depth_search(a, nodes, time, i);
        }
    }
    
    for (int i=1; i<=n; i++) {
        cout << i << " " << nodes[i].start << " " << nodes[i].end << endl;
    }
}