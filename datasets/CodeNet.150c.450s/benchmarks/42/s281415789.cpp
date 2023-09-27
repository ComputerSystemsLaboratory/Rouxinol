#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)

typedef long long ll;

int main(void) {
    int n,q;
    cin >> n >> q;
    queue<pair<string,int> > qu;
    pair<string,int> p;
    REP(i,n){
        cin >> p.first >> p.second;
        qu.push(p);
    }
    int time = 0;
    while(!qu.empty()){
        p = qu.front();
        qu.pop();
        if (p.second<=q){
            time += p.second;
            cout << p.first << " " << time << endl;
        }else{
            time += q;
            p.second -= q;
            qu.push(p);
        }
    }

    return 0;
}