#include<iostream>
#include<vector>
#include<stack>
#include<set>
using namespace std;

void set_color(const vector<vector<int> >& G, vector<int>& color,
                int color_name, int a, int i) {
    if (i >= G[a].size()) return;
    if (color[G[a][i]] == -1) {
        color[G[a][i]] = color_name;
        set_color(G, color, color_name, G[a][i], 0);
    }
    set_color(G, color, color_name, a, i + 1);
}


bool DFS(const vector<vector<int> >& G, int a, int b) {
    if (G[a].size() == 0 || G[b].size() == 0) return false;
    static vector<int> color(G.size(), -1);
    static int color_name = 0;
    if (color[a] != color[b]) return false;
    if (color[a] == -1) {
        set_color(G, color, color_name++, a, 0);
    }
    if (color[a] == color[b]) return true;
    return false;
}


int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int> > G(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

// for (int i = 0; i < n; i++) {
//     cout << i << " : ";
//     for (vector<int>::iterator it = G[i].begin(); it != G[i].end(); it++){
//         cout << *it << " ";
//     }
//     cout << endl;
// }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if (DFS(G, a, b)) {
           cout << "yes" << endl;
        } else {
           cout << "no"  << endl;
        }
    }
    return 0;
}