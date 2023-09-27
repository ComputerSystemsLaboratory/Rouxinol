#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define NIL -1
#define MAX 100000

ll conv(string num) { stringstream ss; ss << num << flush; ll n; ss>>n; return n; }

string conv(ll n) { stringstream ss; ss << n << flush; return ss.str(); }

vector<string> split(string s, string delim) {
    vector<string> res;
    int pos = 0;
    while(true) {
        int found = s.find(delim, pos);
        if(found >= 0) {
            res.push_back(s.substr(pos, found - pos));
        }
        else {
            res.push_back(s.substr(pos));
            break;
        }
        pos = found + delim.size();
    }
    return res;
}
int ALPH_SIZE = 26;
char ALPH_L[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char ALPH_U[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int m, n;
vector<int> G[MAX];
int color[MAX];

void dfs(int r, int c) {
    stack<int> s;
    s.push(r);
    color[r] = c; // set color to the init point 

    while(!s.empty()) {
        int u = s.top();
        s.pop();

        for(int i=0; i<G[u].size(); i++) {
            int v = G[u][i];

            if (color[v] == NIL) {
                color[v] = c;  // set same color to connected points
                s.push(v);
            }

        }
    }
}


void assignColor() {
    int id = 1;

    for(int i=0; i<MAX; i++) {
        color[i] = NIL;
    }

    for(int i=0; i<MAX; i++) {
        if (color[i] == NIL) {
            dfs(i, id++);
        }
    }
}



int main() {
    int v, w, m, n, s, t;
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        cin >> v >> w;
        G[v].push_back(w);
        G[w].push_back(v);
    }

    assignColor();

    int q; 

    cin >> q;
    for(int i=0; i<q; i++) {
        cin >> s >> t;

        if (color[s] == color[t]) cout << "yes" << endl;
        else cout << "no" << endl;
    }


    return 0;
}

