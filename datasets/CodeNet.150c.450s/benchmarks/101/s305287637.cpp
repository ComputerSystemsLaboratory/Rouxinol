#include<iostream>
#include<vector>
using namespace std;

void set_color(const vector<vector<int> >& u, int p, vector<int>& color, int c) {
    if (color[p] != -1) return;
    color[p] = c;
    for (int i = 0; i < u[p].size(); i++) {
        set_color(u, u[p][i], color, c);
    }
}

bool is_friend(const vector<vector<int> >& u, int s, int t){
    static vector<int> color(u.size(), -1);
    static int c = 0;
    set_color(u, s, color, c++);
    return color[s] == color[t];
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > u(n);
    for (int i = 0; i < m; i++) {
        int s, t;
        cin >> s >> t;
        u[s].push_back(t);
        u[t].push_back(s);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int s, t;
        cin >> s >> t;
        if (is_friend(u, s, t)) {
            cout << "yes" << endl;
        } else {
            cout << "no"  << endl;
        }
    }
    return 0;
}