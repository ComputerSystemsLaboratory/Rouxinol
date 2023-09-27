#include <iostream>
#include <vector>
#include <stack>
using namespace std;

#define MAX_SIZE 100100
#define NIL -1

vector< vector<int> > G(MAX_SIZE);
vector<int> seen(MAX_SIZE, NIL);

int id;

void dfs(int v) {
    stack<int> st;
    st.push(v);
    seen[v] = id;
    while (!st.empty()) {
        int u = st.top();
        st.pop();
        for (int i = 0; i < (int)G[u].size(); i++) {
            int t = G[u][i];
            if (seen[t] != NIL) continue;
            seen[t] = id;
            st.push(t);
        }
    }
    return;
}

int main() {
    int n, m;
    cin >> n >> m;

    int s, t;
    for (int i = 0; i < m; i++) {
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    id = 1;
    for (int i = 0; i < n; i++) {
        if (seen[i] == NIL) {
            dfs(i);
            id++;
        }
    }

    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        cin >> s >> t;
        if (seen[s] == seen[t]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
