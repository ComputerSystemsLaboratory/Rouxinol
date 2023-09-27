#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
#include <cstring>
#include <stack>
   
using namespace std;

#define mod 1000000007

class UnionFind{
    private:
        vector<int> p;

    public:
        UnionFind(int n)
        {
            p = vector<int>(n, -1);
        }

        int getparent(int n)
        {
            if(p[n] == -1) return n;
            else return p[n] = getparent(p[n]);
        }

        void addnode(int x, int y){
            x = getparent(x);
            y = getparent(y);
            if(x > y) swap(x, y);
            p[y] = x;
            return;
        }
};

int main()
{
    int v, e;
    cin >> v >> e;
    priority_queue<pair<int, pair<int, int> > > edges;
    for(int i = 0; i < e; i++){
        int s, t, w;
        cin >> s >> t >> w;
        edges.push(make_pair(-w, make_pair(s, t)));
    }
    long long int ans = 0;
    UnionFind UF = UnionFind(v);
    for(int i = 0; i < v - 1; i++){
        int w = (edges.top()).first;
        pair<int, int> p = (edges.top()).second;
        int x = p.first;
        int y = p.second;
        edges.pop();
        while(UF.getparent(x) == UF.getparent(y)){
            w = (edges.top()).first;
            p = (edges.top()).second;
            x = p.first;
            y = p.second;
            edges.pop();
        }
        // cout << x << " " << y << " " << -w << endl;
        ans -= w;
        UF.addnode(x, y);
    }
    cout << ans << endl;
    return 0;
}