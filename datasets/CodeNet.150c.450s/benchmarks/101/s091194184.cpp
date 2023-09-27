// C++ 14
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <queue>
#include <stack>
#include <math.h>

#define ll long long
#define Int int
#define loop(x, start, end) for(Int x = start; x < end; x++)
#define loopdown(x, start, end) for(int x = start; x > end; x--)

using namespace std;

void dfs_color(vector<Int> vs[], Int colors[], Int n) {
    bool visited[n];
    loop(i,0,n)  {
        visited[i] = false;
        colors[i] = 0;
    }
    
    stack<Int> S;
    
    loop(i,0,n) {
        Int color = i + 1;
        S.push(i);
        visited[i] = true;
        if (colors[i] == 0) colors[i] = color;
        
out_of_while:
        while (!S.empty()) {
            Int i = S.top();
            for (auto c: vs[i]) {
                if (visited[c]) continue;
                S.push(c);
                visited[c] = true;
                if (colors[c] == 0) colors[c] = color;
                goto out_of_while;
            }
            
            S.pop();
        }
    }
}


int main(void) {
    Int n, m, q, v, x;
    cin >> n >> m;
    vector<Int> vs[n];
    Int colors[n];
    
    loop(i,0,m) {
        cin >> v >> x;
        vs[v].push_back(x);
        vs[x].push_back(v);
    } 
    
    dfs_color(vs, colors, n);
    
    cin >> q;
    loop(i,0,q) {
        cin >> v >> x;
        if (colors[v] == colors[x]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
